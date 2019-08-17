void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, true);
  delay(1000);
  digitalWrite(13, false);
  delay(1000);
}
