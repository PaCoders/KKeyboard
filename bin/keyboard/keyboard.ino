
//Piano en arduino

//--------- CONEXIONES UTILIZADAS --------------
const int pRed = 3; //LED RGB
const int pBlue = 5;
const int pGreen = 6;
const int buzz = 2; //Buzzer

void setup() {
  pinMode(pRed, OUTPUT); //Conectamos las conexiones del LED RGB
  pinMode(pBlue, OUTPUT);
  pinMode(pGreen, OUTPUT);
  inicio();
  pinMode(buzz, OUTPUT); //Conectamos el buzzer
}

void loop() {
  
}

void inicio(){ //El LED conectado nos indica que esta todo OK en el sistema
  analogWrite(pRed, 19);
  analogWrite(pBlue, 222);
  analogWrite(pGreen, 240);
  delay(1000);
  digitalWrite(pRed,LOW);
  digitalWrite(pBlue,LOW);
  digitalWrite(pGreen,LOW);
}
