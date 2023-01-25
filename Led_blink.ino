int led = 8; // connect pin to 8 
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH); // turn the led on
  delay(1000);
  digitalWrite(led, LOW); // turn the led off
  delay(1000);
}
