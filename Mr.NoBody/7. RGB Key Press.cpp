// Declare a variable to store the incoming character
char ch;

void setup()
{
  // Configure pins 3, 5, and 6 as output pins to control the RGB LED
  pinMode(3, OUTPUT); // Red LED connected to pin 3
  pinMode(5, OUTPUT); // Green LED connected to pin 5
  pinMode(6, OUTPUT); // Blue LED connected to pin 6

  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600); // This will allow Arduino to receive data from the computer
}

void loop()
{
  // Check if any data is available to read from the Serial Monitor
  if (Serial.available()) {
    ch = Serial.read(); // Read the incoming character and store it in variable 'ch'
  }

  // If the received character is 'R' or 'r', turn on RED LED
  if (ch == 'R' || ch == 'r') {
    digitalWrite(3, LOW);  // Turn ON Red LED (assuming active LOW)
    digitalWrite(5, HIGH); // Turn OFF Green LED
    digitalWrite(6, HIGH); // Turn OFF Blue LED
  }

  // If the received character is 'G' or 'g', turn on GREEN LED
  if (ch == 'G' || ch == 'g') {
    digitalWrite(5, LOW);  // Turn ON Green LED
    digitalWrite(6, HIGH); // Turn OFF Blue LED
    digitalWrite(3, HIGH); // Turn OFF Red LED
  }

  // If the received character is 'B' or 'b', turn on BLUE LED
  if (ch == 'B' || ch == 'b') {
    digitalWrite(6, LOW);  // Turn ON Blue LED
    digitalWrite(5, HIGH); // Turn OFF Green LED
    digitalWrite(3, HIGH); // Turn OFF Red LED
  }
}

/*
Explanation:

Connections:
-RGB to D1 (8 pin)
//2 8pin, one to RGB. other to south west of LED Pin slot.
//enter r for red, g for gree, and y for yellow"

- RGB LED Wiring:
  - Red color: connect to pin 3
  - Green color: connect to pin 5
  - Blue color: connect to pin 6
  - Common anode (positive) connected to 5V supply.

Working:
- Open Serial Monitor in Arduino IDE.
- Set baud rate to 9600.
- Type a character and send:
  - Enter 'r' or 'R' to turn ON Red LED.
  - Enter 'g' or 'G' to turn ON Green LED.
  - Enter 'b' or 'B' to turn ON Blue LED.

Important Notes:
- 'LOW' on a pin turns the LED ON because it's wired as a common anode RGB LED (active LOW logic).
- 'HIGH' on a pin turns the LED OFF.
- Your comment mentioned "y for yellow", but the current code does not handle 'Y' or 'y'. (Only 'r', 'g', 'b' are handled.)

Functions Used:
- pinMode(pin, OUTPUT): Set a pin as an output.
- digitalWrite(pin, HIGH/LOW): Set a pin HIGH (5V) or LOW (0V).
- Serial.begin(9600): Start serial communication at 9600 bps.
- Serial.available(): Check if data is available to read.
- Serial.read(): Read incoming serial data.

Summary:
- This program reads keypresses from Serial Monitor and controls an RGB LED accordingly.
*/
