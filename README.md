# TinyLeaf - A library for greenhouse related calculations

This library assists you in calculating greenhouse related topics.
TinyLeaf was originally named `GreenhouseCalc` but after the first
day several new functions were added, the documentation was ported
to doxygen, more examples were added.

Calculations around greenhouses can be a tricky thing and require
some math and thermodynamic concpets behind it. Every single time
I was looking up the different formula for calculating dewpoints,
vapor pressure deficits, etc. This libary combines all the various
functions that I've used over the recent month into a single and
resuable library.

And for those who struggle to convert units - this library will
assist you with it, too.

# Example

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

# Bugs

Please file an issue report on GitHub.

# License

This library is licensed with the MIT License.

# Autor

Ulrich Habel <rhaen@pkgxbox.de>