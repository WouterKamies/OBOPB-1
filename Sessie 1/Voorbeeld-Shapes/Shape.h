#pragma once


class Shape {
    public:
        Shape();
        void setTransparency(float a);

        virtual float area();
        virtual void draw();

    private:
        float transparency = 0;
};

