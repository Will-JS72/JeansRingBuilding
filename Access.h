// header file Access.h
// this is the specification of the class Access
#include <Arduino.h>

class Access
{
private:
	String userInput;
    String pinCode;   // User input
    bool doorLocked;
    int pinAttemptNum;
    String defaultPin;  // Compare input to this

public:
	// Constructors- have same name as class, declared here
    Access(); // Constructor 1: Pre-define defaultPin 0000
    Access(String newPin); //Constructor 2: Pre-define defaultPin 0000 ***Do something specific*

	// Public function
    void changePin(String newPin);
    void Door(bool locked);
    bool checkPin(String pin); // Returns 1 if pin is correct, else returns 0
    void attemptNum(int attempt);
};
