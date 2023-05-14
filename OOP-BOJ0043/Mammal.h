#pragma once
#include "Animal.h"

class Mammal : public Animal
{
private:
    int legs;  // Po�et nohou savce
    string furType;  // Typ srsti savce
    bool nocturnal;  // Ur�uje, zda je savce no�n�
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

    // Getter pro po�et nohou
    int getLegs() const;

    // Setter pro po�et nohou
    void setLegs(int legsN);

    // Getter pro zvuk
    string getSound() const;

    //Setter pro zvuk
    void setSound(string soundS);

    // Getter pro typ srsti
    string getFurType() const;

    // Setter pro typ srsti
    void setFurType(string furT);

    // Metoda pro zji�t�n�, zda je savce no�n�
    bool isNoc() const;

    // Metoda pro nastaven� no�n�ho re�imu savce
    void setNoc(bool noct);

    //p�et�en� metoda
    virtual void makeSound(string sound);
};