#pragma once


class Shape {
    public:
        Shape();
        void setTransparency(float a);

        virtual float area() = 0;
        virtual void draw() = 0;

    private:
        float transparency = 0;
};

