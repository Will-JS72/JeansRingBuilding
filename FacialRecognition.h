// header file FacialRecognition.h
// this is the specification of the class Facial Recognition

#include <Arduino.h>

class FacialRecognition
{
private:
    double SADvalue;
    int numOfShots;
    bool faceFound;
    void captureFaces(int numOfShots);
    void nameImageFolder();

public:
	// Constructors- have same name as class, declared here
    FacialRecognition(int numOfShots);

	// Public function
    void addNewFace();
    void ScanFace(double SAD);
    double getSAD();
};