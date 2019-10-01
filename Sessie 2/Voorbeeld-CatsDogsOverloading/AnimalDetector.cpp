#include <iostream>
#include "AnimalDetector.h"

void AnimalDetector::detectAnimal(Animal a) {
    std::cout << "It's some sort of animal!" << std::endl;
    a.makeNoise();
}
void AnimalDetector::detectAnimal(Dog d) {
    std::cout << "It's a dog!" << std::endl;
    d.makeNoise();
}

void AnimalDetector::detectAnimal(Cat c) {
    std::cout << "It's a cat!" << std::endl;
    c.makeNoise();
}

