void setup()
{
  pinMode(3, OUTPUT); // Set pin 3 as an OUTPUT (for LED)
  pinMode(10, INPUT); // Set pin 10 as an INPUT (for IR sensor)
}

void loop() {
  int hasObstacle = digitalRead(10); // Read the IR sensor (returns HIGH if obstacle detected)

  if (hasObstacle == 1) {
    digitalWrite(3, HIGH); // Turn LED ON if obstacle is detected
  }
  else {
    digitalWrite(3, LOW); // Turn LED OFF if no obstacle
  }

  delay(200); // Wait for 200 milliseconds before checking again
}

/*
Connections:
- IR to A15 (3pin) and below LED to C5 (6pin)
- IR Sensor 3-pin end goes into the 4th slot from the right on the bottom pin line.


Explanation:
- pinMode(pin, mode): Sets a pin as INPUT or OUTPUT.
- digitalRead(pin): Reads HIGH or LOW signal from the specified input pin.
- digitalWrite(pin, value): Sets a digital pin to HIGH or LOW.
- delay(milliseconds): Pauses the program for the specified time.
*/
