class Buzzer: public Actuator{
private:
    int Tone;
public:
    Buzzer(int pin,int Tone);
    void soundSiren(int pin,int Tone,String Function);

};