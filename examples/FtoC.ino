/**
 * FtoC.ino - Example how to convert Fahrenheit to Celsius
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
    float fahrenheit = 87.1;
    float celsius = leaf.FtoC(fahrenheit);
    Serial.print("Calculated degrees Celsius: ");
    Serial.println(celsius);
}

void loop() {
    // Not used in this example
}