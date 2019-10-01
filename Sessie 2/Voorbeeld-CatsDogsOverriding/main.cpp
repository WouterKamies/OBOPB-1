#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Animal animal1 = Animal();
    Dog animal2 = Dog();
    Cat animal3 = Cat();

    animal1.makeNoise();
    animal2.makeNoise();
    animal3.makeNoise();

    return 0;
}