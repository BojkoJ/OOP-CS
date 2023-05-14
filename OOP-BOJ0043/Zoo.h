#include <vector>
#include "Animal.h"
#include "Caretaker.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Bird.h"

using namespace std;

class Zoo {
private:
    vector<Reptile*> reptiles;
    vector<Bird*> birds;
    vector<Mammal*> mammals;
    vector<Caretaker*> caretakers;

public:
    void addReptile(Reptile* reptile);
    void addBird(Bird* bird);
    void addMammal(Mammal* mammal);
    void addCaretaker(Caretaker* caretaker);

    void removeReptile(Reptile* reptile);
    void removeBird(Bird* bird);
    void removeMammal(Mammal* mammal);
    void removeCaretaker(Caretaker* caretaker);

    void printAllAnimals();
    void printAllCaretakers();
};