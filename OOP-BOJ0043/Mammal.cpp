#include "Mammal.h"

using namespace std;

int Mammal::getLegs() const
{
    return legs;
}

void Mammal::setLegs(int legsN)
{
    legs = legsN;
}

string Mammal::getSound() const
{
    return sound;
}

void Mammal::setSound(string soundS)
{
    sound = soundS;
}

string Mammal::getFurType() const
{
    return furType;
}

void Mammal::setFurType(string furT)
{
    furType = furT;
}

bool Mammal::isNoc() const
{
    return nocturnal;
}

void Mammal::setNoc(bool noct)
{
    nocturnal = noct;
}

void Mammal::makeSound(string sound)
{
    cout << sound << endl;
}