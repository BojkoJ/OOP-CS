#pragma once
#include "Animal.h"

class Bird : public Animal
{
private:
    int wingSpan;  // Rozp�t� k��del pt�ka (v centimetrech)
    bool canMigrate;  // Ur�uje, zda pt�k m� schopnost migrace
    string featherColor;  // Barva pe�� pt�ka
    double maxSpeed;  // Maxim�ln� rychlost letu pt�ka (v km/h)
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

    // Getter pro rozp�t� k��del
    int getWingSpan() const;

    // Setter pro rozp�t� k��del
    void setWingSpan(int wingS);

    // Getter pro "um� migrovat"
    bool getCanMigrate() const;

    // Setter pro "um� migrovat"
    void setCanMigrate(bool migrates);

    // Getter pro barvu pe��
    string getFeatherColor() const;

    // Setter pro barvu pe��
    void setFeatherColor(string featherColor);

    // Getter pro maxim�ln� rychlost
    double getMaxSpeed() const;

    // Setter pro maxim�ln� rychlost
    void setMaxSpeed(double maxSp);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    //p�et�en� metoda
    virtual void makeSound(string sound);
};