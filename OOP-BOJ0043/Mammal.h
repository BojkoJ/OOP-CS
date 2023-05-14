#pragma once
#include "Animal.h"

class Mammal : public Animal
{
private:
    int legs;  // Poèet nohou savce
    string furType;  // Typ srsti savce
    bool nocturnal;  // Urèuje, zda je savce noèní
    string sound;

public:
    Mammal(string name, int age, char gender, int legs, string furType, bool nocturnal, string sound) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->legs = legs;
        this->furType = furType;
        this->nocturnal = nocturnal;
        this->sound = sound;
    }

    // Getter pro poèet nohou
    int getLegs() const;

    // Setter pro poèet nohou
    void setLegs(int legsN);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    // Getter pro typ srsti
    string getFurType() const;

    // Setter pro typ srsti
    void setFurType(string furT);

    // Metoda pro zjištìní, zda je savce noèní
    bool isNoc() const;

    // Metoda pro nastavení noèního režimu savce
    void setNoc(bool noct);

    //pøetížená metoda
    virtual void makeSound(string sound);
};