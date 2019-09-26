#pragma once

#include "Shape.h"

class Circle : public Shape {
    public:
        Circle(int r);

        float area() override;

        void draw() override;

    private:
        int radius;
};

