// Implementation Interface class

#include "Interface.h"

// Constructors go here
// No constructor for this class

// Public functions

void Interface::getInput()
{
    if(Serial.available() > 0){
        userInput = Serial.read();
    }
    return userInput;
}
