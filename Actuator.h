class Actuator
{
private:
    bool actuatorState;
    int actuatorPin;
    String defaultPin;  // Compare input to this

public:
	// Constructors- have same name as class, declared here
    Actuator(int pin, bool state);

	// Public function
    void setState(int pin, bool state);
};