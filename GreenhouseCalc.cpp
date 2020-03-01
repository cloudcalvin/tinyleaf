/**
 * GreenhouseCalc.cpp - A  library to calculate Vapor Pressure
 * Defizit for your greenhouse
 * 
 * Ulrich Habel <rhaen@pkgbox.de>
 * 
 * MIT License
 */

#include "GreenhouseCalc.h"

float GreenhouseCalc::VaporPressureDeficit(float temperature, float humidity) {
    float SaturatedVaporPressure = 610.7 * pow(10, 7.5 * temperature / (237.3 + temperature));
    float VaporPressureDeficit = ( 1 - humidity / 100) * SaturatedVaporPressure;
    return VaporPressureDeficit;
}