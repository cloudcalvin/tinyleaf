/** @mainpage TinyLeaf
 *
 *  A library for greenhouse related calculations.
 *
 *  Primary interface documentation: @ref TinyLeaf
 *
 *  Project page on GitHub: https://github.com/rhaen/tinyleaf
 *
 *  Available in the Arduino IDE Library Manager (search for "TinyLeaf")
 *
 *  Latest release always available at: https://github.com/rhaen/tinyleaf/releases/latest
 *
 *  @copyright Ulrich Habel <rhaen@pkgbox.de>, MIT License
 *
 *  @authors Ulrich Habel <rhaen@pkgbox.de>
 */



#ifndef TINYLEAF_H
#define TINYLEAF_H

#include "Arduino.h"

class TinyLeaf {
    public:
        /**
        * Calculate `vpd`.
        * @param temperature Temperature in Celsius degrees
        * @param humidity Relative humidity in percent
        * @return The calculated Vapor Pressure Deficit for given temperature and relative humidity.
        */
        float VPD(float temperature, float humidity);

        /**
        * Calculate `SVP`.
        * @note SVP is the abbreviation for `Saturated Vapor Pressure`
        * @param temperature Temperature in Celsius degrees
        * @return The calculated Saturated Pressure Deficit for given temperature.
        */        
        float SVP(float temperature);

        /**
        * Calculate `AVP`.
        * @note AVP is the abbreviation for `Actual Vapor Pressure`
        * @note If you don't have the dewpoint temperature, please check the Dewpoint function.
        * @param dewpoint Dewpoint temperature in Celsius degrees
        * @return The calculated Actual Vapor Pressure
        */ 
        float AVP(float dewpoint);

        /**
        * Calculate `Dewpoint`.
        * @note The `Dewpoint`is the temperature when water condensation will appear.
        * @param temperature Dewpoint temperature in Celsius degrees
        * @param humidity Relative humidity in percent
        * @param a Physical constant (Sonntag90), default to 17.62
        * @param b Physical constant (Sonntag90), default to 243.12 °C
        * @return The calculated Actual Vapor Pressure
        */ 
        float Dewpoint(float temperature, float humidity, float a = 17.62, float b = 243.12);

        /**
        * Calculate `Relative humidity`.
        * @param AVP Actual Vapor Pressure
        * @param SVP Saturated Vapor Pressure
        * @return The calculated Relative humidity in percent
        */ 
        float RH(float avp, float svp);

        /**
        * Convert `Fahrenheit`to `Celsius`.
        * @param fahrenheit Degrees in Fahrenheit
        * @return Degrees Celsius
        */        
        float FtoC(float fahrenheit);

        /**
        * Convert `Celsius`to `Fahrenheit`.
        * @param fahrenheit Degrees in Celsius
        * @return Degrees Fahrenheit
        */        
        float CtoF(float celsius);
};

#endif // TINYLEAF_H