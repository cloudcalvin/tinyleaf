/**
 * RH.ino - Example how to calculate relative humidity
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
    float avp = 2786.2; // Temperature inside the greenhouse
    float svp = 2983.6;  // Saturated Vapor Pressure
    float rh = leaf.RH(avp, svp);
    Serial.print("Calculated relative humidity: ");
    Serial.println(rh);
}

void loop() {
    // Not used in this example
}