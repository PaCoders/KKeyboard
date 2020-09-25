
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
  Keyboard teclas;
  teclas.tocar(2);
}
