#include <LiquidCrystal.h> // Include the LiquidCrystal library to control the LCD

int num; // Variable to store the number entered by the user
String s; // String to store the message to be displayed on the LCD

// Create an LCD object with specified pins: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd1(6, 7, 2, 3, 4, 5);

void setup()
{
  lcd1.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows
  lcd1.print("Enter the Number"); // Display initial message on LCD
  Serial.begin(9600); // Start serial communication at 9600 baud rate
}

void loop()
{
  if (Serial.available()) { // Check if data is available in the serial buffer
    num = Serial.parseInt(); // Read the integer input from Serial Monitor
    lcd1.clear(); // Clear the LCD screen
    delay(500); // Wait for half a second

    lcd1.setCursor(0, 0); // Set cursor to first column, first row
    s = "Square of " + String(num) + " : " + (num * num); // Form the string showing the number and its square
    lcd1.print(s); // Display the formed string on LCD

    delay(10000); // Wait for 10 seconds to allow user to read
    lcd1.clear(); // Clear the LCD after displaying result
    lcd1.setCursor(0, 0); // Set cursor again to first row
    lcd1.print("Enter the Number"); // Ask user to enter another number
  }
}


/*
Connections: 
- Below the LCD to D1 (8pin)

Serial Monitor:
- Open Serial Monitor (9600 baud)
- Enter a number to display its square on the LCD

Libraries Used:
- LiquidCrystal (Default library in Arduino IDE)


*/
