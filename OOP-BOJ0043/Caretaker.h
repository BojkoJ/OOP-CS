#pragma once
#include <string>
#include <vector>
#include "Animal.h"
#include "Employee.h"

using namespace std;

class Caretaker : public Employee{
private:
    string name;
    int age;
    string specialization;
    vector<Animal*> careList;

public:
    Caretaker(string name, int age, string specialization) {
        this->name = name;
        this->age = age;
        this->specialization = specialization;
    }

    //konstruktor pro p��pad, �e by jsme cht�li definovat o�et�ovatele, a rovnou mu d�t cel� careList
    Caretaker(string name, int age, string specialization, vector<Animal*> careList) {
        this->name = name;
        this->age = age;
        this->specialization = specialization;
        this->careList = careList;
    }

    string getName() const;
    int getAge() const;
    string getSpecialization() const;
    void getCareList() const;

    void setName(string n);
    void setAge(int a);
    void setsSpecialization(string spec);

    void addAnimalToCare(Animal* animal);
    void removeAnimalFromCare(Animal* animal);
    void performTasks();


    // P�et�en� metoda pro krmen� zv��ete s parametrem string
    void feedAnimal(const std::string& food);

    // P�et�en� metoda pro krmen� zv��ete s parametrem Animal
    void feedAnimal(const std::string& food1, const std::string& food2);

    //p�et�en� abstraktn� metoda z T��dy employee

    virtual void doWork();

    virtual void takeBreak();

    virtual void attedMeeting();
};