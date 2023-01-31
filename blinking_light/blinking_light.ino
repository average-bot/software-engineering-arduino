void setup() {
  // initialize digital pin 13 as an output.
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}//
