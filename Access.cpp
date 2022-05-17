// Implementation Access class

#include "Access.h"


// constructor 1
Access::Access()
{
	pinCode = "0000";
    doorLocked = 0;
    pinAttemptNum = 0;

    if(doorLocked == 1)
    {
        digitalWrite(45, HIGH);      //Switch Solenoid ON
    }
    else if(doorLocked == 0)
    {
        digitalWrite(45, LOW);       //Switch Solenoid OFF
    }  //Door is unlocked
}

// constructor 2
Access::Access(String pin)
{
	pinCode = pin;
    doorLocked = 0;
    pinAttemptNum = 0;

		if(doorLocked == 1){
			digitalWrite(45, HIGH);      //Switch Solenoid ON
		}
		else if(doorLocked == 0){
			digitalWrite(45, LOW);       //Switch Solenoid OFF
		}  //Door is unlocked
}

// public functions

void Access::changePin(String newPin)
{
	pinCode = newPin;

    Serial.print("Pin has been successfully changed to: ");
    Serial.println(newPin);
}

void Access::Door(bool locked)
{
    if(locked == 0)
    {
        digitalWrite(45, LOW);
        doorLocked = 0;
        Serial.print("Door is unlocked");
    }
    else if(locked == 1)
    {
        digitalWrite(45, HIGH);
        doorLocked = 1;
        Serial.print("* Door is locked");
    }
}

void Access::attemptNum(int attempt)
{
    if(attempt <= 2)
    {
        Serial.print(3 - attempt);
        Serial.println(" Attempts remaining");
    }
    else if(attempt > 2)
    {
        // Maintenance etc...
    }
}

bool Access::checkPin(String pin)
{
    if(pin == pinCode)
    {
        Serial.println("Pin is correct");
        pinAttemptNum = 0;  // Restart number of attempts
        return 1;
    }
		if(pin != defaultPin)
        {
            Serial.println("Pin is incorrect");
            return 0;
		}
    if(doorLocked != 0)
    {
        pinAttemptNum++;
        attemptNum(pinAttemptNum);
        return 0;
    }
}
