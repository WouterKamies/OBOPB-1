
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main() {
    Rectangle r = Rectangle(200, 300);
    r.draw();
    std::cout << r.area() << std::endl;

    Circle c = Circle(150);
    c.draw();
    std::cout << c.area() << std::endl;

    return 0;
}