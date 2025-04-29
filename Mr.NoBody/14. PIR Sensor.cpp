int pirPin = 7;      // Pin connected to PIR sensor OUT
int ledPin = 13;     // Pin connected to LED (optional)

void setup() {
  pinMode(pirPin, INPUT);  // Set PIR sensor pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output (optional)
  Serial.begin(9600);      // Start serial communication
}

void loop() {
  int motion = digitalRead(pirPin);  // Read the state of the PIR sensor
 
  if (motion == HIGH) {
    // Motion detected
    digitalWrite(ledPin, HIGH);  // Turn ON LED (optional)
    Serial.println("PIR Motion Detected !");
  } else {
    // No motion
    digitalWrite(ledPin, LOW);   // Turn OFF LED (optional)
    Serial.println("PIR not detected any motion");
  }
 
  delay(1000);  // Small delay to prevent excessive serial printing
}

/*
Connection:
-PIR sensor to A12 (3pin)
-below LED to C7 (5pin)

// Notes:
- Open Serial Monitor (9600 baud) to view motion detection messages.
- LED will turn ON when motion is detected, OFF when no motion.

*/
