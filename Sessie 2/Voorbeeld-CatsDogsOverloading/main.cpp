#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "AnimalDetector.h"

int main() {
    Animal animal1 = Animal();
    Dog animal2 = Dog();
    Cat animal3 = Cat();

    AnimalDetector detector;
    detector.detectAnimal(animal1);
    detector.detectAnimal(animal2);
    detector.detectAnimal(animal3);

    return 0;
}