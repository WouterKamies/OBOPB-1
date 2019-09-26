
#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main() {
//    Shape s = Shape(); // kan niet meer - shape is nu een abstracte baseclass
//    s.draw();
//    std::cout << s.area() << std::endl;

    Rectangle r = Rectangle(200, 300);
    r.draw();
    std::cout << r.area() << std::endl;

    Circle c = Circle(150);
    c.draw();
    std::cout << c.area() << std::endl;

    return 0;
}