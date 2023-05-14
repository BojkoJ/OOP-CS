#include "Caretaker.h"

using namespace std;

string Caretaker::getName() const
{
    return name;;
}

int Caretaker::getAge() const
{
    return age;
}

string Caretaker::getSpecialization() const
{
    return specialization;
}

void Caretaker::getCareList() const
{
    for (Animal* animal : careList) {
        cout << "Animal Name: " << animal->getName() << endl;
        cout << "Animal Age: " << animal->getAge() << endl;
        cout << "Animal Gender: " << animal->getGender() << endl;
        cout << "--------------------------" << endl;
    }
}

void Caretaker::setName(string n)
{
    name = n;
}

void Caretaker::setAge(int a)
{
    age = a;
}

void Caretaker::setsSpecialization(string spec)
{
    specialization = spec;
}

void Caretaker::addAnimalToCare(Animal* animal)
{
    //pøidání zvíøete na careList
    careList.push_back(animal);
}

void Caretaker::removeAnimalFromCare(Animal* animal)
{
    //vyhledání zvíøete a smazání ho z careListu
    for (auto it = careList.begin(); it != careList.end(); ++it) {
        if (*it == animal) {
            careList.erase(it);
            break;
        }
    }
}

void Caretaker::performTasks()
{
    cout << "Caretaker " << name << " is performing tasks:" << endl;

    for (Animal* animal : careList) {
        cout << " - Feeding " << animal->getName() << endl;

        cout << " - Cleaning " << animal->getName() << "'s enclosure" << endl;

        cout << " - Providing medical care for " << animal->getName() << endl;

        cout << "-------------------------------------------------" << endl;
    }
}

void Caretaker::feedAnimal(const std::string& food)
{
    cout << "Feeding the animal with " << food << endl;
}

void Caretaker::feedAnimal(const std::string& food1, const std::string& food2)
{
    cout << "Feeding the animal with " << food1 << "and" << food2 << endl;
}

void Caretaker::doWork()
{
    performTasks();
}

void Caretaker::takeBreak()
{
    cout << "taking a break" << endl;
}

void Caretaker::attedMeeting()
{
    cout << "meeting attendet" << endl;
}
