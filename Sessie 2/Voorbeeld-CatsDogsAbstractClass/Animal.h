#pragma once

#include <string>

class Animal {
    public:
        Animal(const std::string& name);
        virtual void makeNoise() = 0;

        void feed();
        std::string isHungry();

    private:
        std::string name;
        bool isFed = false;
};

