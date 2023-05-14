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

    // Statick� metoda pro generov�n� unik�tn�ho identifik�toru pro zv��e
    static int generateUniqueId();

    static int mammalCount;

    // Statick� metoda pro zv��en� po�tu savc�
    static void incrementAnimalCount();

    // Statick� metoda pro sn�en� po�tu savc�
    static void decrementAnimalCount();

    // Statick� metoda pro v�po�et pr�m�rn�ho v�ku savc� v zahrad�
    static float calculateAverageAge(const vector<Mammal*>& mammals);

    // Statick� metoda pro z�sk�n� instance t��dy Zoo pomoc� Singleton n�vrhov�ho vzoru
    static Zoo& getZooInstance();
};