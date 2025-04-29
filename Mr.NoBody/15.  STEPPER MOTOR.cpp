void setup() {
  pinMode(2, OUTPUT);  // Set pin 2 as output
  pinMode(3, OUTPUT);  // Set pin 3 as output
  pinMode(4, OUTPUT);  // Set pin 4 as output
  pinMode(5, OUTPUT);  // Set pin 5 as output
}

void loop() {
  digitalWrite(2, HIGH); // Turn ON device connected to pin 2
  digitalWrite(3, LOW);  // Turn OFF device connected to pin 3
  digitalWrite(4, LOW);  // Turn OFF device connected to pin 4
  digitalWrite(5, LOW);  // Turn OFF device connected to pin 5

  delay(10); // Wait for 10 milliseconds

  digitalWrite(2, LOW);  // Turn OFF device connected to pin 2
  digitalWrite(3, HIGH); // Turn ON device connected to pin 3
  digitalWrite(4, LOW);  // Turn OFF device connected to pin 4
  digitalWrite(5, LOW);  // Turn OFF device connected to pin 5

  delay(10); // Wait for 10 milliseconds

  digitalWrite(2, LOW);  // Turn OFF device connected to pin 2
  digitalWrite(3, LOW);  // Turn OFF device connected to pin 3
  digitalWrite(4, HIGH); // Turn ON device connected to pin 4
  digitalWrite(5, LOW);  // Turn OFF device connected to pin 5

  delay(10); // Wait for 10 milliseconds

  digitalWrite(2, LOW);  // Turn OFF device connected to pin 2
  digitalWrite(3, LOW);  // Turn OFF device connected to pin 3
  digitalWrite(4, LOW);  // Turn OFF device connected to pin 4
  digitalWrite(5, HIGH); // Turn ON device connected to pin 5

  delay(10); // Wait for 10 milliseconds
}

/*

// Connections:
-Stepper Motor to Right of RFID
-6pin right of RFID to C5 (6pin)

// Working:
// - LEDs (or devices) turn ON one by one with a small delay, creating a sequence effect.

// Notes:
// - Open Serial Monitor is not required for this sketch.
// - You can slow down the sequence by increasing the delay time if needed.

*/
