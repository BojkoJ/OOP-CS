#pragma once
#include "Animal.h"

class Reptile : public Animal
{
private:
    int bodyLength;  // Délka tìla plaza (v centimetrech)
    bool isVenomous;  // Urèuje, zda je plaz jedovatý
    string skinType;  // Druh kùže plazù (napø. šupinatá, hladká)
    int legs;  // Poèet nohou plazù
    string wayOfMoving;  // Zpùsob pohybu plazù (napø. plazení, plavání)
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

    // Getter pro délku tìla
    int getBodyLength() const;

    // Setter pro rozpìtí køídel
    void setBodyLength(int bodyLen);

    // Getter pro "je jedovatý"
    bool getIsVenomous() const;

    // Setter pro "je jedovatý"
    void setIsVenomous(bool venom);

    // Getter pro typ kùže
    string getSkinType() const;

    // Setter pro typ kùže
    void setSkinType(string skinT);

    // Getter pro poèet noh
    int getLegs() const;

    // Setter pro poèet noh
    void setLegs(int l);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    //pøetížená metoda
    virtual void makeSound(string sound);
};