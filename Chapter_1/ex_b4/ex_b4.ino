int pinLED = 6;

void setup(){
  pinMode(pinLED, OUTPUT);
}
void loop(){
  digitalWrite(pinLED, TRUE);
  delay(1000);
  digitalWrite(pinLED, FALSE);
  delay(1000);
}
