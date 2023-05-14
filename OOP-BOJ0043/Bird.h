#pragma once
#include "Animal.h"

class Bird : public Animal
{
private:
    int wingSpan;  // Rozpìtí køídel ptáka (v centimetrech)
    bool canMigrate;  // Urèuje, zda pták má schopnost migrace
    string featherColor;  // Barva peøí ptáka
    double maxSpeed;  // Maximální rychlost letu ptáka (v km/h)
    string sound;

public: 
    Bird(string name, int age, char gender,int wingSpan,bool canMigrate,string featherColor,double maxSpeed, string sound) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->wingSpan = wingSpan;
        this->canMigrate = canMigrate;
        this->featherColor = featherColor;
        this->maxSpeed = maxSpeed;
        this->sound = sound;
    }

    // Getter pro rozpìtí køídel
    int getWingSpan() const;

    // Setter pro rozpìtí køídel
    void setWingSpan(int wingS);

    // Getter pro "umí migrovat"
    bool getCanMigrate() const;

    // Setter pro "umí migrovat"
    void setCanMigrate(bool migrates);

    // Getter pro barvu peøí
    string getFeatherColor() const;

    // Setter pro barvu peøí
    void setFeatherColor(string featherColor);

    // Getter pro maximální rychlost
    double getMaxSpeed() const;

    // Setter pro maximální rychlost
    void setMaxSpeed(double maxSp);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    //pøetížená metoda
    virtual void makeSound(string sound);
};