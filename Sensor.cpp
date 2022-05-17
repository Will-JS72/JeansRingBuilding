// Implementation Access class

#include "Sensor.h"


// constructor 1
Sensor::Sensor(int pin)
{
    sensorState = 0;
    sensorPin = pin;    // Ex: Sensor PIR(20)
    sensorTimer = 0; // Change this if doesn't work??
}

// public functions

void Sensor::startTimer()
{
    sensorTimer = 0; // Change this if doesn't work??
}

time Sensor::getTime()      // Might be long instead of time??
{
    return millis() - sensorTimer; // Or the proper way to get current time
}

bool Sensor::getState()
{
    if(digitalRead(sensorPin) == 1)
    {
        sensorState = 1;
    }
    else
    {
        sensorState = 0;
    }

    return sensorState;
}



