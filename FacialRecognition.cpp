// Implementation Facial Recognition class

#include "FacialRecognition.h"

using namespace std;

// constructor 1
FacialRecognition::FacialRecognition()
{
    SADvalue = xx; // Set proper initial value
    numOfShots = xx; // Set proper initial value
    faceFound = 0; 
}

FacialRecognition::FacialRecognition(int numShots)
{
    SADvalue = xx; // Set proper initial value
    numOfShots = numShots;
    faceFound = 0; 
}

// private functions
void FacialRecognition::captureFaces(int numShots)
{
    // Do...
}

void FacialRecognition::nameImageFolder()
{
    // Do...
}


// public functions
void FacialRecognition::addNewFace()
{
    // Do...
}

void FacialRecognition::ScanFace(double SAD)
{
    // Do...
}

double FacialRecognition::getSAD()
{
    return SADvalue;
}
