// Define pins for LEDs
#define LED1 10  // LED1 is connected to pin 10
#define LED2 11  // LED2 is connected to pin 11
#define LED3 12  // LED3 is connected to pin 12
#define LED4 13  // LED4 is connected to pin 13

void setup() {
  // setup() runs once when the Arduino board is powered ON or reset
  // Set LED pins as OUTPUT so Arduino can send voltage to them
  pinMode(LED1, OUTPUT); // Set pin 10 as OUTPUT
  pinMode(LED2, OUTPUT); // Set pin 11 as OUTPUT
  pinMode(LED3, OUTPUT); // Set pin 12 as OUTPUT
  pinMode(LED4, OUTPUT); // Set pin 13 as OUTPUT
}

void loop() {
  // loop() runs again and again after setup() finishes
  // We will blink the LEDs one by one with delays
  // Turn ON LED1
  digitalWrite(LED1, HIGH); // HIGH means 5V -> LED turns ON
  delay(200);               // Wait for 200 milliseconds
  // Turn OFF LED1
  digitalWrite(LED1, LOW);  // LOW means 0V -> LED turns OFF
  delay(200);               // Wait for 200 milliseconds
  // Turn ON LED2
  digitalWrite(LED2, HIGH);
  delay(200);
  // Turn OFF LED2
  digitalWrite(LED2, LOW);
  delay(200);
  // Turn ON LED3
  digitalWrite(LED3, HIGH);
  delay(200);

  digitalWrite(LED3, LOW); //LED 3 OFF
  delay(200);

  digitalWrite(LED4, HIGH); //LED 4 ON
  delay(200);

  digitalWrite(LED4, LOW); //LED 4 OFF
  delay(200);
  // After finishing LED4, the loop starts again from LED1
}

/*

Connections:

LED TO C7 (6pin)
Connect 6 pin cable to below the LED and other end to first slot from right of 6 pin line



Definitions:
- #define is used to give a simple name to a pin number.
  Example: #define LED1 10 means whenever we write LED1, it actually means pin 10.

setup():
- Runs only once when Arduino starts.
- We use pinMode() to set each LED pin as OUTPUT (because we want to control LEDs, not read from them).

loop():
- Runs forever.
- In the loop, we:
    - Turn ON each LED (digitalWrite(pin, HIGH))
    - Wait 200 ms (delay(200))
    - Turn OFF each LED (digitalWrite(pin, LOW))
    - Wait 200 ms again.
- This pattern makes the LEDs blink one by one with visible delays.

Important Functions:
- pinMode(pin, OUTPUT): Configure the pin as output.
- digitalWrite(pin, HIGH/LOW): Turn the pin ON (HIGH = 5V) or OFF (LOW = 0V).
- delay(ms): Pause the program for the given milliseconds.

Summary:
- This code sequentially blinks four LEDs connected to pins 10, 11, 12, and 13.
- Each LED turns ON and OFF with a 0.2-second delay.
- The whole sequence repeats forever.

*/

