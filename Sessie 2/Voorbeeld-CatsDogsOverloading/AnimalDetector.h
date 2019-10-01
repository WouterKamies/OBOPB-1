#pragma once


#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

class AnimalDetector {
    public:
        void detectAnimal(Dog d);

        void detectAnimal(Cat c);

        void detectAnimal(Animal a);

};

