/**
 * AVP.ino - Example how to calculate AVP with dewpoint temperature
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
    float avp = leaf.AVP(temperature);
    Serial.print("Calculated AVP: ");
    Serial.println(avp);
}

void loop() {
    // Not used in this example
}