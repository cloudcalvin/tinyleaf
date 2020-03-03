#include "TinyLeaf.h"
#include <math.h>

float TinyLeaf::VPD(float temperature, float humidity) {
    float svp = TinyLeaf::SVP(temperature);
    float vpd = ( 1 - humidity / 100) * svp;
    return vpd;
}

float TinyLeaf::SVP(float temperature){
    return 610.7 * pow(10, 7.5 * temperature / (237.3 + temperature));
}

float TinyLeaf::AVP(float dewpoint){
    return TinyLeaf::SVP(dewpoint);
}

float TinyLeaf::Dewpoint(float temperature, float humidity, float a, float b){
    float alpha = log(humidity / 100) + a * temperature / (b + temperature);
    float dewTemperature = b * alpha / ( a - alpha);
    return dewTemperature;
}

float TinyLeaf::RH(float avp, float svp){
    return 100 * avp / svp;
}

float TinyLeaf::FtoC(float fahrenheit){
    return (fahrenheit - 32) / 1.8;
}

float TinyLeaf::CtoF(float celsius){
    return celsius * 1.8 + 32;
}