#define TRIG_PIN 8  // Define the Trigger pin
#define ECHO_PIN 9  // Define the Echo pin

void setup() {
  Serial.begin(9600);        // Initialize serial communication at 9600 baud rate
  pinMode(TRIG_PIN, OUTPUT); // Set Trigger pin as output
  pinMode(ECHO_PIN, INPUT);  // Set Echo pin as input
}

void loop() {
  long duration;
  float distance;

  // Send a 10-microsecond pulse to trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure the echo pulse duration
  duration = pulseIn(ECHO_PIN, HIGH);

  // Convert time into distance (in cm)
  distance = duration * 0.034 / 2;

  // Print the distance value on Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // Wait 500ms before next reading
}

/*

// Connections:
- Ultrasonic sensor to B7 (4pin)

// Working:
// - The sensor sends out an ultrasonic pulse via Trig.
// - It waits for the pulse to reflect back and measures the time taken via Echo.
// - The time is converted to distance and displayed on the Serial Monitor.

// Notes:
// - Open Serial Monitor to see distance readings.
// - Ideal for obstacle detection or distance measurement projects.

*/
