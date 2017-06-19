//Semáforo

int ledRedPin = 10;
int ledYellowPin = 9;
int ledGreenPin = 8;
int chavePin = 7;

int tempo = 1000;

void setup(){
  pinMode(ledRedPin, OUTPUT);
  pinMode(ledYellowPin, OUTPUT);
  pinMode(ledGreenPin, OUTPUT);
  pinMode(chavePin, INPUT);
}

void loop(){
  //Pare
  digitalWrite(ledRedPin, HIGH);
  digitalWrite(ledYellowPin, LOW);
  digitalWrite(ledGreenPin, LOW);
  delay(tempo);
  while(digitalRead(chavePin) == HIGH){}
  
  //Atencao
  digitalWrite(ledRedPin, LOW);
  digitalWrite(ledYellowPin, HIGH);
  digitalWrite(ledGreenPin, LOW);
  delay(tempo);
  while(digitalRead(chavePin) == HIGH){}
  
  //Siga
  digitalWrite(ledRedPin, LOW);
  digitalWrite(ledYellowPin, LOW);
  digitalWrite(ledGreenPin, HIGH);
  delay(tempo);
  while(digitalRead(chavePin) == HIGH){}
}
