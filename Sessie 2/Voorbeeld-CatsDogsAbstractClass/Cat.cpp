#include "Cat.h"

#include <iostream>

void Cat::makeNoise() {
    std::cout << "Miaow" << std::endl;
}

Cat::Cat(std::string name) : Animal(name) {}
