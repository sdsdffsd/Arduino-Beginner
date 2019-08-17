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
  digitalWrite(pinLEDYellow , FALSE);
  digitalWrite(pinLEDGreen  , FALSE);
  Serial.println("pinLEDRed is on!");
  delay(1000);

  digitalWrite(pinLEDRed, FALSE);
  digitalWrite(pinLEDRed , TRUE);
  digitalWrite(pinLEDGreen  , FALSE);
  Serial.println("pinLEDYellow is on!");
  delay(1000);

  digitalWrite(pinLEDRed, FALSE);
  digitalWrite(pinLEDYellow , FALSE);
  digitalWrite(pinLEDGreen  , TRUE);
  Serial.println("pinLEDGreen is on!");
  delay(1000);
}
