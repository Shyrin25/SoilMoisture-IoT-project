# SoilMoisture-IoT-project

# Soil Moisture Sensor with LED

This Arduino project detects soil moisture levels using a soil moisture sensor and lights up an LED when the soil is dry.

## Components Used
- Arduino Uno
- Soil Moisture Sensor
- LED (Any color)
- Jumper Wires
- Breadboard

## How It Works
1. The soil moisture sensor reads the water content in the soil.
2. If the soil is dry (value > threshold), the LED turns ON.
3. Otherwise, the LED remains OFF.

## Code
See the SoilMoisture_LED.ino file for the complete Arduino code.

## Output
When the soil is dry:
- LED turns ON
- Serial Monitor shows a high sensor value

When the soil is wet:
- LED turns OFF
- Serial Monitor shows a low sensor value
