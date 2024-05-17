#include "Floor.h"
 
Floor::Floor() : mCarpetColour(0x00FF0000), mHasFibre(true)
{
}
 
unsigned int Floor::getCarpetColour()
{
    return mCarpetColour;
}
 
void Floor::setCarpetColour(unsigned int colour)
{
    mCarpetColour = colour;
}
 
bool Floor::getHasFibre()
{
    return mHasFibre;
}
 
void Floor::setHasFibre(bool hasFibre)
{
    mHasFibre = hasFibre;
}