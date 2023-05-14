#include "Bird.h"

int Bird::getWingSpan() const
{
    return wingSpan;
}

void Bird::setWingSpan(int wingS)
{
    wingSpan = wingS;
}

bool Bird::getCanMigrate() const
{
    return canMigrate;
}

void Bird::setCanMigrate(bool migrates)
{
    canMigrate = migrates;
}

string Bird::getFeatherColor() const
{
    return featherColor;
}

void Bird::setFeatherColor(string featherC)
{
    featherColor = featherC;
}

double Bird::getMaxSpeed() const
{
    return maxSpeed;
}

void Bird::setMaxSpeed(double maxSp)
{
    maxSpeed = maxSp;
}

string Bird::getSound() const
{
    return sound;
}

void Bird::setSound(string soundS)
{
    sound = soundS;
}

void Bird::makeSound(string sound)
{
    cout << sound << endl;
}
