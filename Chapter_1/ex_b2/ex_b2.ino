void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Hello");
  Serial.println("World!");
  delay(1000);
}
