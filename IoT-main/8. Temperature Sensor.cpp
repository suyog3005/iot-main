#include <DHT.h> // Include the DHT sensor library

#define DHTPIN 2     // Pin where the DHT11 sensor is connected
#define DHTTYPE DHT11   // Define the type of DHT sensor (DHT11 or DHT22)

DHT dht(DHTPIN, DHTTYPE); // Create a DHT object to access temperature and humidity

void setup() {
  Serial.begin(9600); // Start serial communication with a baud rate of 9600
  dht.begin(); // Initialize the DHT sensor
}

void loop() {
  delay(2000); // Wait for 2 seconds between readings

  float temperature = dht.readTemperature(); // Read temperature in Celsius
  float humidity = dht.readHumidity();       // Read humidity in percentage

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT sensor!"); // Error message if sensor reading fails
    return; // Exit the loop if failed to read
  }

  Serial.print("Temperature: "); // Print label
  Serial.print(temperature); // Print temperature value
  Serial.print(" °C, Humidity: "); // Print unit and label
  Serial.print(humidity); // Print humidity value
  Serial.println(" %"); // Print percent sign and new line
}

/*
Connections:
- Temp Sensor to A7 (3pin)
- The sensor's 3-pin cable should be inserted into the 7th slot from the left of the bottom-most pins.

How to Use:
- Open the Serial Monitor from Arduino IDE.
- Set the baud rate to 9600.
- The monitor will display temperature (in Celsius) and humidity (in %) every 2 seconds.

Important:
- Make sure the required libraries are installed before uploading the code:
  1) DHT Sensor Library (by Adafruit)
  2) DHT11 Library (by Dhruba)
  3) DHTNEW Library (by Rob T)

Function meanings:
- Serial.begin(9600): Starts the communication to Serial Monitor.
- dht.begin(): Prepares the DHT sensor for reading.
- dht.readTemperature(): Reads temperature value.
- dht.readHumidity(): Reads humidity value.
- isnan(): Checks if the reading failed (returns true if value is Not-a-Number).

Summary:
- This program reads temperature and humidity using DHT11 sensor.
- Displays the result on the Serial Monitor every 2 seconds.
- If a reading fails, it shows "Failed to read from DHT sensor!".
*/
