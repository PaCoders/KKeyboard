
//Piano en arduino

#include "notes.h"

//--------- CONEXIONES UTILIZADAS --------------
const int pButton = 9; //Boton
const int pRed = 3; //LED RGB
const int pBlue = 5;
const int pGreen = 6;
const int buzz = 2; //Buzzer

// --------- ESTADO DEL BOTON ---------

int status = HIGH; //El boton por defecto no esta oprimido

// --------- NOTAS DEL PIANO ---------
int notas[] = [C8,B7,LA_SI,A7,SOL_LA,G7,FA_SOL,F7,E7,RE_MI,D7,DO_RE,C7,B6,LA_SI,A6,SOL_LA,
G6,FA_SOL,F6,E6,RE_MI,D6,DO_RE,C6,B5,A5,G5,F5,E5,C5,B4];

void setup() {
  Serial.begin(9600); //Conectamos el puerto serie
  pinMode(pRed, OUTPUT); //Conectamos las conexiones del LED RGB
  pinMode(pBlue, OUTPUT);
  pinMode(pGreen, OUTPUT);
  inicio();
  pinMode(buzz, OUTPUT); //Conectamos el buzzer
  pinMode(pButton, INPUT);
}

void loop() {
  while(status != LOW){
    piano();
    status = digitalRead(pButton);
  }
  
}

void inicio(){ //El LED conectado nos indica que esta todo OK en el sistema
  analogWrite(pRed, 6);
  analogWrite(pBlue, 176);
  analogWrite(pGreen, 6);
  Serial.println("Todo correcto por aqui"); //Mensaje de comprobacion
  delay(1500);
  digitalWrite(pRed,LOW);
  digitalWrite(pBlue,LOW);
  digitalWrite(pGreen,LOW);
}

void piano(){
  for(int i = 0; notas[i] != '\0';i++){
    tone(buzz,notas[i],1500);
    noTone(300);
  }
}
