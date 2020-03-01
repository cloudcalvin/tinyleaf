/**
 * Basic.ino - Example how to use the library
 * GreenhouseCalc
 * 
 * Ulrich Habel <rhaen@pkgbox.de>
 * 
 * MIT License
 */

#include <Arduino.h>
#include <GreenhouseCalc.h>

GreenhouseCalc green;

void setup() {
    Serial.begin(9600);
    float temperature = 22.01;  // Temperature inside the greenhouse
    float humidity = 58.17;     // Humidity inside the greenhouse
    float vpd = green.VaporPressureDeficit(temperature, humidity);
    Serial.print("Calculated VPD: ");
    Serial.println(vpd);
}

void loop() {
    // Not used in this example
}