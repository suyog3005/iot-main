#include "dht.h" // Include the DHT library
#define dataPin 2 // Define the pin where the DHT11 sensor data line is connected

dht DHT; // Create an instance of the dht class
int temp; // Variable to store temperature reading
int hum;  // Variable to store humidity reading

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud
  delay(2000); // Wait for the DHT sensor to stabilize
}

void loop() {
  int readData = DHT.read11(dataPin); // Read data from DHT11 sensor
  hum = DHT.humidity;    // Get humidity value
  temp = DHT.temperature; // Get temperature value

  // Output data formatted for Serial Plotter
  Serial.print(hum);  // Print humidity
  Serial.print(",");  // Print a comma as a separator
  Serial.println(temp);  // Print temperature

  delay(1000); // Wait 1 second before the next reading
}

/*
Connections:
- Temp sensor to A7 (3pin)
- Insert the sensor into the 7th slot from the left on the bottom-most pin line.

Instructions:
- Open the Serial Plotter from Arduino IDE to visualize the humidity and temperature data.
- Set the baud rate to 9600.

Required Libraries:
1) DHT11
2) DHTlib
3) DHT Sensor Library

Explanation:
- DHT.read11(dataPin): Reads humidity and temperature from the DHT11 sensor.
- Serial.print() / Serial.println(): Used to display the data for plotting or monitoring.
- Data is printed in the format: humidity, temperature (separated by a comma for easy plotting).
- Delay of 1 second between readings to ensure sensor stability and readable output.
*/
