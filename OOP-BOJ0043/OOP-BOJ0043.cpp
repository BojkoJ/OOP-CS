#include <iostream>
#include <string>
#include <vector>
#include "Caretaker.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Bird.h"
#include "ZooUtils.h"

using namespace std;

int main()
{

	ZooUtils* NewYorkZooUtils = new ZooUtils();

	Mammal* LionLex = new Mammal("Lex", 8, 'm', 4, "tawny coat", false, "ROAR");
	NewYorkZooUtils->incrementAnimalCount();
	Mammal* LionDrage = new Mammal("Drage", 4, 'm', 4, "tawny coat", false, "ROAR");
	NewYorkZooUtils->incrementAnimalCount();
	Mammal* TigerHelx = new Mammal("Helx", 6, 'm', 4, "orange and black guard fur", false, "PURR");
	NewYorkZooUtils->incrementAnimalCount();
	Mammal* BearBruno = new Mammal("Bruno", 10, 'm', 4, "heavy fur", true, "BRUM");
	NewYorkZooUtils->incrementAnimalCount();
	Mammal* DraculaBat = new Mammal("Dracula", 5, 'f', 2, "none", true, "SQUEAK");
	NewYorkZooUtils->incrementAnimalCount();
	Mammal* FlipperDolphin = new Mammal("Flipper", 2, 'm', 0, "none", false, "*ultrasound wave*");
	NewYorkZooUtils->incrementAnimalCount();

	Reptile* LizzyLizard = new Reptile("Lizzy", 1, 'f', 9, false, "scaly", 4, "climbing", "chirp");
	NewYorkZooUtils->incrementAnimalCount();
	Reptile* RexCrocodile = new Reptile("Rex", 15, 'm', 300, false, "scaly", 4, "swimming", "roar");
	NewYorkZooUtils->incrementAnimalCount();
	Reptile* SerpentSnake = new Reptile("Serpent", 5, 'm', 150, true, "smooth", 0, "slithering", "hiss");
	NewYorkZooUtils->incrementAnimalCount();
	Reptile* SpikeLizard = new Reptile("Spike", 3, 'm', 30, false, "rough", 4, "climbing", "bark");
	NewYorkZooUtils->incrementAnimalCount();
	Reptile* IggyIguana = new Reptile("Iggy", 7, 'f', 120, false, "scaly", 4, "tree-dwelling", "click");
	NewYorkZooUtils->incrementAnimalCount();
	Reptile* GizmoGecko = new Reptile("Gecko", 1, 'f', 10, false, "scaly", 4, "crawling", "chirp");
	NewYorkZooUtils->incrementAnimalCount();

	Bird* ApolloEagle = new Bird("Apollo", 6, 'm', 200, false, "brown", 160, "screech");
	NewYorkZooUtils->incrementAnimalCount();
	Bird* LunaOwl = new Bird("Luna", 3, 'f', 100, false, "white", 60, "hoot");
	NewYorkZooUtils->incrementAnimalCount();
	Bird* RioParrot = new Bird("Rio", 4, 'm', 49, false, "multicolored", 40, "gibberish");
	NewYorkZooUtils->incrementAnimalCount();
	Bird* RubyHummingbird = new Bird("Ruby", 1, 'f', 10, false, "green", 70, "buzz");
	NewYorkZooUtils->incrementAnimalCount();
	Bird* WaddlePenguin = new Bird("Waddle", 5, 'm', 50, true, "black and white", 20, "honk");
	NewYorkZooUtils->incrementAnimalCount();
	Bird* RosieFlamingo = new Bird("Rosie", 8, 'f', 150, false, "pink", 55, "toot");
	NewYorkZooUtils->incrementAnimalCount();

	Caretaker* JohnReptilier = new Caretaker("John", 30, "reptiles");
	Caretaker* EmilyBirdier = new Caretaker("Emily", 25, "birds");
	Caretaker* MichaelMammalist = new Caretaker("Michael", 35, "mammals");
	Caretaker* SarahReplilier = new Caretaker("Sarah", 32, "reptiles");
	Caretaker* JessicaBirdier = new Caretaker("Jessica", 27, "birds");
	Caretaker* DavidZookeeper = new Caretaker("Jessica", 48, "zoopeeking");


	Zoo* NewYorkZoo = new Zoo();
	NewYorkZoo->addCaretaker(JohnReptilier);
	NewYorkZoo->addCaretaker(EmilyBirdier);
	NewYorkZoo->addCaretaker(MichaelMammalist);
	NewYorkZoo->addCaretaker(SarahReplilier);
	NewYorkZoo->addCaretaker(JessicaBirdier);
	NewYorkZoo->addCaretaker(DavidZookeeper);

	NewYorkZoo->addMammal(LionLex);
	NewYorkZoo->addMammal(LionDrage);
	NewYorkZoo->addMammal(TigerHelx);
	NewYorkZoo->addMammal(BearBruno);
	NewYorkZoo->addMammal(DraculaBat);
	NewYorkZoo->addMammal(FlipperDolphin);

	NewYorkZoo->printAllAnimals();
	NewYorkZoo->removeMammal(BearBruno);
	NewYorkZoo->printAllCaretakers();
	NewYorkZoo->printAllAnimals();

	vector<Mammal*> mammals;

	mammals.push_back(LionDrage);
	mammals.push_back(LionLex);
	mammals.push_back(TigerHelx);
	mammals.push_back(FlipperDolphin);
	mammals.push_back(DraculaBat);

	cout << "in Zoo there is this summary of animals: " << NewYorkZooUtils->calculateAverageAge(mammals) << endl;
	
	cout << "unique animal id: " << NewYorkZooUtils->generateUniqueId() << endl;


	LizzyLizard->makeSound(LizzyLizard->getSound());
	LunaOwl->makeSound(LunaOwl->getSound());
	LionLex->makeSound(LionLex->getSound());
	IggyIguana->makeSound(IggyIguana->getSound());


	JohnReptilier->addAnimalToCare(IggyIguana);
	JohnReptilier->addAnimalToCare(GizmoGecko);
	JohnReptilier->addAnimalToCare(SpikeLizard);

	SarahReplilier->addAnimalToCare(LizzyLizard);
	SarahReplilier->addAnimalToCare(RexCrocodile);
	SarahReplilier->addAnimalToCare(SerpentSnake);

	EmilyBirdier->addAnimalToCare(LunaOwl);
	EmilyBirdier->addAnimalToCare(RioParrot);
	EmilyBirdier->addAnimalToCare(RosieFlamingo);

	JessicaBirdier->addAnimalToCare(WaddlePenguin);
	JessicaBirdier->addAnimalToCare(ApolloEagle);
	JessicaBirdier->addAnimalToCare(RubyHummingbird);

	MichaelMammalist->addAnimalToCare(LionDrage);
	MichaelMammalist->addAnimalToCare(LionLex);
	MichaelMammalist->addAnimalToCare(TigerHelx);
	MichaelMammalist->addAnimalToCare(BearBruno);
	MichaelMammalist->addAnimalToCare(DraculaBat);
	MichaelMammalist->addAnimalToCare(FlipperDolphin);

	JohnReptilier->doWork();
	JohnReptilier->setAge(31);

	EmilyBirdier->feedAnimal("bread", "seeds");
	JessicaBirdier->feedAnimal("bun");

	MichaelMammalist->removeAnimalFromCare(LionDrage);
	MichaelMammalist->attedMeeting();
	MichaelMammalist->getCareList();


	JohnReptilier->addAnimalToCare(LionDrage);


	cin.get();
}