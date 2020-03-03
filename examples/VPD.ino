/**
 * VPD.ino - Example how to calculate Vapor Pressure Deficit
 * TinyLeaf
 * 
 * Ulrich Habel <rhaen@pkgbox.de>
 * 
 * MIT License
 */

#include <Arduino.h>
#include <TinyLeaf.h>

TinyLeaf leaf;

void setup() {
    Serial.begin(9600);
    float temperature = 22.01;  // Temperature inside the greenhouse
    float humidity = 58.17;     // Humidity inside the greenhouse
    float vpd = leaf.VPD(temperature, humidity);
    Serial.print("Calculated VPD: ");
    Serial.println(vpd);
}

void loop() {
    // Not used in this example
}