#include "ZooUtils.h"

int ZooUtils::mammalCount = 0;

int ZooUtils::generateUniqueId()
{
    static int idCounter = 0;
    return ++idCounter;
}

void ZooUtils::incrementAnimalCount()
{
    mammalCount++;
}

void ZooUtils::decrementAnimalCount()
{
    mammalCount--;
}

float ZooUtils::calculateAverageAge(const vector<Mammal*>& mammals)
 {
        float totalAge = 0;
        for (const auto& mammal : mammals) {
            totalAge += mammal->getAge();
        }
        return totalAge / mammalCount;
    }

Zoo& ZooUtils::getZooInstance()
{
    static Zoo zooInstance; // Jedna instance tøídy Zoo
    return zooInstance;
}
