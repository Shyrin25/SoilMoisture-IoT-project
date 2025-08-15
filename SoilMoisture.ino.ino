// Soil Moisture Sensor with LED Indicator
// Author: Shyrin
// Date: August 2025

// Pin configuration
int sensorPin = A0;  // Analog pin connected to soil moisture sensor
int ledPin = 7;      // Digital pin connected to LED

int sensorValue = 0; // Variable to store sensor reading
int threshold = 500; // Adjust based on soil condition

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);  // Read soil moisture value
  Serial.print("Soil Moisture Value: ");
  Serial.println(sensorValue);

  // If soil is dry
  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH); // Turn ON LED
  } 
  else {
    digitalWrite(ledPin, LOW);  // Turn OFF LED
  }

  delay(1000); // Wait 1 second before next reading
}
