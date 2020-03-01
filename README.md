# GreenhouseCalc - Calculate the Vapor Pressure Defizit for greenhouses

Every single time that I code something around my greenhouse I am
searching for a formula to calcute the Vapor Pressure Defizit.

Ok, so this is the library for it - simple and easy to use.

# Example

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

# Bugs

Please file an issue report on GitHub.

# License

This library is licensed with the MIT License.

# Autor

Ulrich Habel <rhaen@pkgxbox.de>