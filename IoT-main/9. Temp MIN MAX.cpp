#include <DHT.h> // Include the DHT sensor library

#define DHTPIN 2       // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11  // Define the type of DHT sensor (DHT11)

DHT dht(DHTPIN, DHTTYPE); // Create a DHT object to access temperature and humidity

float maxTemp = -1000;  // Initialize maximum temperature to a very low value
float minTemp = 1000;   // Initialize minimum temperature to a very high value

void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud rate
  dht.begin();        // Initialize the DHT sensor
}

void loop() {
  delay(2000); // Wait for 2 seconds between readings

  // Read temperature in Celsius
  float temperatureC = dht.readTemperature();

  // Read temperature in Fahrenheit
  float temperatureF = temperatureC * 9.0 / 5.0 + 32.0; // Convert Celsius to Fahrenheit

  // Update maximum and minimum recorded temperatures
  if (temperatureC > maxTemp) {
    maxTemp = temperatureC; // Update maximum temperature if current is higher
  }
  if (temperatureC < minTemp) {
    minTemp = temperatureC; // Update minimum temperature if current is lower
  }
 
  // Display temperature readings
  Serial.print("Temperature: ");
  Serial.print(temperatureC); // Print temperature in Celsius
  Serial.print(" °C, ");
  Serial.print(temperatureF); // Print temperature in Fahrenheit
  Serial.println(" °F");

  // Display maximum and minimum temperatures recorded so far
  Serial.print("Max Temperature: ");
  Serial.print(maxTemp);
  Serial.print(" °C, Min Temperature: ");
  Serial.print(minTemp);
  Serial.println(" °C");
}

/*
Connections:
- Temp sensor to A7 (3pin)
- Plug the sensor into the 7th slot from the left of the bottom-most pin line.

Instructions:
- Open the Serial Monitor in Arduino IDE to see the temperature readings.
- Set the baud rate to 9600.

Required Libraries:
1) DHT Sensor Library (Adafruit)
2) DHT Sensor Library for ESPx
3) DHT11
4) DHTNEW

Explanation of Functions:
- dht.readTemperature(): Reads the temperature in Celsius.
- temperatureF = temperatureC * 9/5 + 32: Formula to convert Celsius to Fahrenheit.
- Serial.print()/Serial.println(): Used to display information on the Serial Monitor.
- maxTemp and minTemp variables track the highest and lowest temperatures recorded during operation.

Summary:
- The Arduino reads the temperature every 2 seconds.
- It shows both the current temperature and the max/min temperatures detected since startup.
*/
