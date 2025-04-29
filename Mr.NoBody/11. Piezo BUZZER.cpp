// Define the pin for the piezo buzzer
#define BUZZER_PIN 8 // Buzzer connected to pin 8

void setup() {
  tone(BUZZER_PIN, 440, 500); // Play tone at 440 Hz (A4 note) for 500 milliseconds
  delay(1000); // Wait for 1 second
  
  tone(BUZZER_PIN, 523, 500); // Play tone at 523 Hz (C5 note) for 500 milliseconds
  delay(1000); // Wait for 1 second
}

void loop() {
  // No code needed in loop
}

/*
Connections:
- below Piezo buzzer to A14 (3pin)
- The other end of the cable goes into the 5th slot from the right on the bottom-most pin line.

Explanation:
- #define BUZZER_PIN 8: Assigns a name to pin 8 for easier reading of the code.
- tone(pin, frequency, duration): Plays a sound at a given frequency (in Hz) for a specific time (in milliseconds).
- delay(milliseconds): Pauses the program for the specified time.
- setup(): Runs once when the Arduino starts — here, it plays two different tones sequentially.
- loop(): Left empty because in this code, the sounds are only played once during setup.
*/
