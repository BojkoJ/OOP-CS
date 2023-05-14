#pragma once
#include "Animal.h"

class Reptile : public Animal
{
private:
    int bodyLength;  // D�lka t�la plaza (v centimetrech)
    bool isVenomous;  // Ur�uje, zda je plaz jedovat�
    string skinType;  // Druh k��e plaz� (nap�. �upinat�, hladk�)
    int legs;  // Po�et nohou plaz�
    string wayOfMoving;  // Zp�sob pohybu plaz� (nap�. plazen�, plav�n�)
    string sound;

public:
    Reptile(string name, int age, char gender, int bodyLength, bool isVenomous, string skinType,int legs, string wayOfMoving, string sound) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->bodyLength = bodyLength;
        this->isVenomous = isVenomous;
        this->skinType = skinType;
        this->legs = legs;
        this->wayOfMoving = wayOfMoving;
        this->sound = sound;
    }

    // Getter pro d�lku t�la
    int getBodyLength() const;

    // Setter pro rozp�t� k��del
    void setBodyLength(int bodyLen);

    // Getter pro "je jedovat�"
    bool getIsVenomous() const;

    // Setter pro "je jedovat�"
    void setIsVenomous(bool venom);

    // Getter pro typ k��e
    string getSkinType() const;

    // Setter pro typ k��e
    void setSkinType(string skinT);

    // Getter pro po�et noh
    int getLegs() const;

    // Setter pro po�et noh
    void setLegs(int l);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    //p�et�en� metoda
    virtual void makeSound(string sound);
};