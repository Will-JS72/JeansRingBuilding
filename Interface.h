// header file Interface.h
// this is the specification of the class Interface

#include <Arduino.h>

class Interface
{
private:
	string userInput;

public:
	// Constructors- have same name as class, declared here
    // No constructor for this class

	// Public function
    void getInput();
    void displayComponentState(String component, bool state);
};