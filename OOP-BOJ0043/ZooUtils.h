#pragma once

#include <vector>
#include "Animal.h"
#include "Caretaker.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Bird.h"
#include "Zoo.h"

using namespace std;

class ZooUtils {
public:

    // Statická metoda pro generování unikátního identifikátoru pro zvíøe
    static int generateUniqueId();

    static int mammalCount;

    // Statická metoda pro zvýšení poètu savcù
    static void incrementAnimalCount();

    // Statická metoda pro snížení poètu savcù
    static void decrementAnimalCount();

    // Statická metoda pro výpoèet prùmìrného vìku savcù v zahradì
    static float calculateAverageAge(const vector<Mammal*>& mammals);

    // Statická metoda pro získání instance tøídy Zoo pomocí Singleton návrhového vzoru
    static Zoo& getZooInstance();
};