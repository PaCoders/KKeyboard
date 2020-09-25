
//Piano en arduino

const int pRed = 3;
const int pBlue = 5;
const int pGreen = 6;
const int buzz = 2;

void setup() {
  pinMode(pRed, OUTPUT); //Conectamos las conexiones del LED RGB
  pinMode(pBlue, OUTPUT);
  pinMode(pGreen, OUTPUT);
  pinMode(buzz, OUTPUT); //Conectamos el buzzer
}

void loop() {
  analogWrite(pRed, 19);
  analogWrite(pBlue, 222);
  analogWrite(pGreen, 240);
}

