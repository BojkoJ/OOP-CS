#include "Reptile.h"

int Reptile::getBodyLength() const
{
    return bodyLength;
}

void Reptile::setBodyLength(int bodyLen)
{
    bodyLength = bodyLen;
}

bool Reptile::getIsVenomous() const
{
    return isVenomous;
}

void Reptile::setIsVenomous(bool venom)
{
    isVenomous = venom;
}

string Reptile::getSkinType() const
{
    return skinType;
}

void Reptile::setSkinType(string skinT)
{
    skinType = skinT;
}

int Reptile::getLegs() const
{
    return legs;
}

void Reptile::setLegs(int l)
{
    legs = l;
}

string Reptile::getSound() const
{
    return sound;
}

void Reptile::setSound(string soundS)
{
    sound = soundS;
}

void Reptile::makeSound(string sound)
{
    if (!sound.empty()) { //nìkteøí plazí nevydávají zvuk
        cout << sound << endl;
    }
}
