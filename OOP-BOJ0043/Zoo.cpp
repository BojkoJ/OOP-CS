#include "Zoo.h"

using namespace std;

void Zoo::addReptile(Reptile* reptile)
{
	reptiles.push_back(reptile);
}

void Zoo::addBird(Bird* bird)
{
	birds.push_back(bird);
}

void Zoo::addMammal(Mammal* mammal)
{
	mammals.push_back(mammal);
}

void Zoo::addCaretaker(Caretaker* caretaker)
{
	caretakers.push_back(caretaker);
}

void Zoo::removeReptile(Reptile* reptile)
{
	auto it = find(reptiles.begin(), reptiles.end(), reptile);
	if (it != reptiles.end()) {
		reptiles.erase(it);
	}
}

void Zoo::removeBird(Bird* bird)
{
	auto it = find(birds.begin(), birds.end(), bird);
	if (it != birds.end()) {
		birds.erase(it);
	}
}

void Zoo::removeMammal(Mammal* mammal)
{
	auto it = find(mammals.begin(), mammals.end(), mammal);
	if (it != mammals.end()) {
		mammals.erase(it);
	}
}

void Zoo::removeCaretaker(Caretaker* caretaker)
{
	auto it = find(caretakers.begin(), caretakers.end(), caretaker);
	if (it != caretakers.end()) {
		caretakers.erase(it);
	}
}

void Zoo::printAllAnimals()
{
	cout << "Animals in the zoo:" << endl;

	// Výpis reptilù
	cout << "Reptiles:" << endl;
	for (const auto& reptile : reptiles) {
		cout << "- " << reptile->getName() << endl;
	}

	// Výpis ptákù
	cout << "Birds:" << endl;
	for (const auto& bird : birds) {
		cout << "- " << bird->getName() << endl;
	}

	// Výpis savcù
	cout << "Mammals:" << endl;
	for (const auto& mammal : mammals) {
		cout << "- " << mammal->getName() << endl;
	}
}

void Zoo::printAllCaretakers()
{
	cout << "Caretakers in the zoo:" << endl;

	for (const auto& caretaker : caretakers) {
		cout << "- " << caretaker->getName() << endl;
	}

}
