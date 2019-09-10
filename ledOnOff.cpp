int led=3; //LED an Pin 3
void setup() {
  pinMode(led, OUTPUT); //led als OUTPUT definieren

}

void loop() {
  digitalWrite(led,HIGH); //LED eine Sekunde an
  delay(1000);
  digitalWrite(led,LOW); //LED eine Sekunde aus
  delay(1000);
}
