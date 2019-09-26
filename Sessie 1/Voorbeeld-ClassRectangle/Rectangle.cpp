#include "Rectangle.h"

// in de *.cpp file (het implementatie file)
// schrijf je de eigenlijke code: wat doet de class eigenlijk?
// hoe werken de methods?

Rectangle::Rectangle(int w, int h) {
    this->width = w;
    this->height = h;
}

void Rectangle::setTransparency(float a) {
    this->transparency = a;
}

int Rectangle::area() {
    return width * height;
}

void Rectangle::draw() {
    // fictieve teken-functie
    // ...
}
