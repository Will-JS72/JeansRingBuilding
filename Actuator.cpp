
#include "Actuator.h"


// constructor 1
// Access::Access()
// {
// 	pinCode = "0000";
//     doorLocked = 0;
//     pinAttemptNum = 0;

//     if(doorLocked == 1)
//     {
//         digitalWrite(45, HIGH);      //Switch Solenoid ON
//     }
//     else if(doorLocked == 0)
//     {
//         digitalWrite(45, LOW);       //Switch Solenoid OFF
//     }  //Door is unlocked
// }

// constructor 2
Actuator::Actuator(int pin, bool state)
{
    pinMode(pin, OUTPUT);
    if(state == 1)
    {
        digitalWrite(pin, HIGH);      //Switch Solenoid ON
    }
    else if(state == 0)
    {
        digitalWrite(pin, LOW);       //Switch Solenoid OFF
    }
}

// public functions


void Actuator::setState( int pin, bool state)
{
    if(state == 1)
    {
        digitalWrite(pin, HIGH);      //Switch Solenoid ON
    }
    else if(state == 0)
    {
        digitalWrite(pin, LOW);       //Switch Solenoid OFF
    }
}
