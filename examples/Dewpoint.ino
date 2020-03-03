/**
 * Dewpoint.ino - Example how to calculate the dewpoint inside a greenhouse
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
    float humidity = 65;        // Relative humidity inside the greenhouse
    float dewpoint = leaf.Dewpoint(temperature, humidity);
    Serial.print("Calculated Dewpoint (with contants): ");
    Serial.println(dewpoint);
}

void loop() {
    // Not used in this example
}