
//Piano en arduino

// --------- VARIABLES ----------
const double freq[] = {4186.01,3951.07,3729.31,3520,3322.44,3135.96,2959.96,2793.83,2637.02,2489.02,2349.32,2217.46,2093,1975.53,1864.66,1760,1661.22,1567.98,1479.98,1396.91,1318.51,1244.51,1174.66,1108.73,1046.5,987.767,932.328,880,830.609,783.991,739.989,698.456,659.255,622.254,587.33,554.365,523.251,493.883,466.164,440,415.305,391.995,369.994,349.228,329.628,311.127,293.665,277.183,261.626,246.942,233.082,220,207.652,195.998,184.997,174.614,164.814,155.563,146.832,138.591,130.813,123.471,116.541,110,103.826,97.9989,92.4986,87.3071,82.4069,77.7817,73.4162,69.2957,65.4064,61.7354,58.2705,55,51.913,48.9995,46.2493,43.6536,41.2035,38.8909,36.7081,34.6479,32.7032,30.8677,29.1353,27.5,'\0'};

//Las frecuencias de cada nota la ponemos en un vector y va del 1 al 88
//--------- CONEXIONES UTILIZADAS --------------
const int pButton = 9; //Boton
const int pRed = 3; //LED RGB
const int pBlue = 5;
const int pGreen = 6;
const int buzz = 2; //Buzzer

// --------- ESTADO DEL BOTON ---------

int status = HIGH; //El boton por defecto no esta oprimido

void setup() {
  /*
  bool isBut = 0; //Variable para comprobar que el pulsador este conectado correctamente
  Serial.begin(9600); //Iniciamos el puerto serie
  pinMode(pRed, OUTPUT); //Conectamos las conexiones del LED RGB
  pinMode(pBlue, OUTPUT);
  pinMode(pGreen, OUTPUT);
  */
  pinMode(buzz, OUTPUT); //Conectamos el buzzer
  pinMode(pButton, INPUT); //Conectamos el pulsador
  /*
  inicio(); //Comprobamos que este todo bien conectado con esta funcion
  isBut = boton_conectado();
  if(isBut == 1){
    digitalWrite(pGreen,HIGH);
    delay(1500);
    digitalWrite(pGreen,LOW);
  }
  else{
    digitalWrite(pRed,HIGH);
    delay(1500);
    digitalWrite(pRed,LOW);
  }
  */
 tocar_melodia();
}

void loop() {
  
}

void inicio(){ //El LED conectado nos indica que esta todo OK en el sistema
  analogWrite(pRed, 6);
  analogWrite(pBlue, 176);
  analogWrite(pGreen, 6);
  tone(buzz, freq[87], 1000); //Sonar el buzzer
  Serial.println("Todo correcto por aqui"); //Mensaje de comprobacion
  delay(1500);
  digitalWrite(pRed,LOW);
  digitalWrite(pBlue,LOW);
  digitalWrite(pGreen,LOW);
}

bool boton_conectado(){
  Serial.println("Oprima el pulsador para comprobar que funciona correctamente");
  delay(1600);
  status = digitalRead(pButton);
  if(status == LOW) return true;
  else return false;
}

void tocar_melodia(){
  tone(buzz,freq[31],200);
  delay(100);
  tone(buzz,freq[27],800);
  delay(100);
  tone(buzz,freq[27],125);
  tone(buzz,freq[28],125);
  tone(buzz,freq[30],125);

}