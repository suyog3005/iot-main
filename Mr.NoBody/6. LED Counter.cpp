// Define pin numbers for the LEDs
#define GREEN_LED 4   // Green LED connected to digital pin 4
#define YELLOW_LED 2  // Yellow LED connected to digital pin 2
#define RED_LED 3     // Red LED connected to digital pin 3

// Initialize counter variable
int counter = 0;  // This will be used to keep track of time or events

void setup() {
  // setup() runs once when the Arduino is powered ON or reset

  // Set the LED pins as OUTPUT so Arduino can control them
  pinMode(GREEN_LED, OUTPUT);   // Set pin 4 as OUTPUT for Green LED
  pinMode(YELLOW_LED, OUTPUT);  // Set pin 2 as OUTPUT for Yellow LED
  pinMode(RED_LED, OUTPUT);     // Set pin 3 as OUTPUT for Red LED
}

void loop() {
  // loop() runs repeatedly after setup()

  // First, make sure all LEDs are turned OFF at the beginning of each loop
  digitalWrite(GREEN_LED, LOW);  
  digitalWrite(YELLOW_LED, LOW); 
  digitalWrite(RED_LED, LOW);    

  // Based on the value of the counter, turn ON specific LEDs
  if (counter <= 100) {
    // When counter is between 0 and 100:
    // Yellow and Red LEDs ON, Green OFF
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20); // Short delay for stability
  }
  else if (counter > 100 && counter <= 200) {
    // When counter is between 101 and 200:
    // Green and Red LEDs ON, Yellow OFF
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(RED_LED, HIGH);
    delay(20); // Short delay for stability
  } 
  else if (counter > 200) {
    // When counter is greater than 200:
    // Green and Yellow LEDs ON, Red OFF
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, HIGH);
    delay(20); // Short delay for stability
  }

  // Increment the counter by 1 every cycle
  counter++;

  // Reset the counter if it exceeds 300 to start the cycle again
  if (counter > 300) {
    counter = 0;
  }

  // Wait 100ms before the next update
  delay(100);
}

/*
Explanation:

Connections:
- LED to C5 (6pin)
- Connect 6pin below LED to 3rd slot from right of the 6pin line.
.

Definitions:
- #define is used to assign readable names (like GREEN_LED) to pin numbers (like 4).
- Easier to understand and modify later.

Variables:
- counter is an integer that counts how many times the loop has run.

setup():
- Sets the LED pins as OUTPUT, telling Arduino these pins will send voltage (not receive).

loop():
- Turns OFF all LEDs initially to avoid unwanted states.
- Based on the counter value:
    - 0–100 → Yellow and Red ON
    - 101–200 → Green and Red ON
    - 201–300 → Green and Yellow ON
- counter++ increases the counter by 1 each cycle.
- If counter > 300, reset it back to 0 to restart the pattern.
- A 100 ms delay between updates controls the speed of the LED switching.

Functions Used:
- pinMode(pin, OUTPUT): Set a pin as an output.
- digitalWrite(pin, HIGH/LOW): Turn a pin ON (HIGH) or OFF (LOW).
- delay(ms): Pause the program for a given number of milliseconds.

In simple words:
- LEDs show different patterns depending on the counter value.
- After reaching a certain count (300), it resets and starts again.
- This behavior creates a timed LED pattern based on counting loops.

*/
