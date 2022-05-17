// header file Sensor.h
// this is the specification of the class Sensor
#include <Arduino.h>

class Sensor
{
private:
    bool sensorState;
    int sensorPin;
    time sensorTimer;   // Might be long instead of time??

public:
	// Constructors- have same name as class, declared here
    Sensor(int pin);

	// Public function
    void startTimer();
    time getTime(); // Might be long instead of time??
    bool getState();
};
