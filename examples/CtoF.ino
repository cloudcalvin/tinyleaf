/**
 * CtoF.ino - Example how to convert Celsius to Fahrenheit
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
    float celsius = 25.1;
    float fahrenheit = leaf.FtoC(celsius);
    Serial.print("Calculated degrees Fahrenheit: ");
    Serial.println(fahrenheit);
}

void loop() {
    // Not used in this example
}