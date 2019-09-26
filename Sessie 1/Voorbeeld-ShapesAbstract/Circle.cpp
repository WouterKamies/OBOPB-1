
#include <iostream>
#include <math.h>
#include "Circle.h"

Circle::Circle(int r) {
    radius = r;
}

float Circle::area() {
    return M_PI * radius * radius;
}

void Circle::draw() {
    std::cout << "Drawing circle r=" << radius << std::endl;

    // imgLib.drawCircle(...)
    // imgLib.setTransparency(transparency)

}
