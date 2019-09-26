
#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(int width, int height) : widht(width), height(height) {}

float Rectangle::area() {
    return widht * height;
}

void Rectangle::draw() {
    std::cout << "Drawing rectangle " << widht << "x" << height << std::endl;
}


