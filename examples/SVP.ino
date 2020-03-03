/**
 * SVP.ino - Example how to calculate SVP
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
    float svp = leaf.SVP(temperature);
    Serial.print("Calculated SVP: ");
    Serial.println(svp);
}

void loop() {
    // Not used in this example
}