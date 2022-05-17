
#include "Buzzer.h"


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
Buzzer::Buzzer(int pin){
    pinMode(pin, OUTPUT);
    noTone(pin);
}

// public functions


void Buzzer::soundSiren(int pin,int Tone,String Function){
    if(Function == "on"){
        tone(pin,Tone);      //Switch Buzzer ON
    }else if(Function == "off"){
        noTone(pin);       //Switch Buzzer OFF
    }else{
        Serial.println("wrong input given to soundSiren()");
    }
}
