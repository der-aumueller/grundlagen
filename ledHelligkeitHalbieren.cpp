int led=3; //Led an Pin 3
void setup() {
  
}

void loop() {
  analogWrite(led,255); //Helligkeit jeweils im Abstand von 300ms halbieren
  delay(300);
  analogWrite(led,128);
  delay(300);
  analogWrite(led,64);
  delay(300);
  analogWrite(led,32);
  delay(300);
  analogWrite(led,16);
  delay(300);
  analogWrite(led,8);
  delay(300);
  analogWrite(led,4);
  delay(300);
  analogWrite(led,2);
  delay(300);
  analogWrite(led,0);
  delay(300);
}
