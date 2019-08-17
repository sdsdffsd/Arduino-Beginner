int pinLEDRed = 6;
int pinLEDYellow = 5;
int pinLEDGreen = 4;

void setup(){
  pinMode(pinLEDRed , OUTPUT);
  pinMode(pinLEDYellow  , OUTPUT);
  pinMode(pinLEDGreen  , OUTPUT);
}
void loop(){
  digitalWrite(pinLEDRed, TRUE);
  digitalWrite(pinLEDRed , FALSE);
  digitalWrite(pinLEDGreen  , FALSE);
  delay(1000);
  digitalWrite(pinLEDRed, FALSE);
  digitalWrite(pinLEDRed , TRUE);
  digitalWrite(pinLEDGreen  , FALSE);
  delay(1000);
  digitalWrite(pinLEDRed, FALSE);
  digitalWrite(pinLEDRed , FALSE);
  digitalWrite(pinLEDGreen  , TRUE);
  delay(1000);
}
