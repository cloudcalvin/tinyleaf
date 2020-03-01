/**
 * GreenhouseCalc.h - A  library to calculate Vapor Pressure
 * Defizit for your greenhouse
 * 
 * Ulrich Habel <rhaen@pkgbox.de>
 * 
 * MIT License
 */


#ifndef GREENHOUSECALC_H
#define GREENHOUSECALC_H

#include "Arduino.h"

class GreenhouseCalc {
    public:
        float VaporPressureDeficit(float temperature, float humidity);
};

#endif // GREENHOUSECALC_H