#pragma once

#include "Shape.h"

class Rectangle : public Shape {
    private:
        int widht, height;

    public:
        Rectangle(int width, int height);
        float area() override;
        void draw() override;
};

