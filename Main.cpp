#include "Access.h"
#include "Interface.h"
#include "Actuator.h"
#include "Buzzer.h"
#include "FacialRecognition.h"
#include "MaintenancePerson.h"
#include "Sensor.h"

void setup() 
{

}

void loop() 
{
    Access Access1(1234);
    Access1.Door(0);

    Sensor Magnetic(Placepinhere);
    Sensor PIR(Placepinhere);

} 
