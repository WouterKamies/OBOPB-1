#pragma once

// de *header* file (.h) beschrijft wat een class allemaal kan,
// en wat voor attributen 'ie heeft

// declareer de (verder fictieve) class Rectangle
class Rectangle {

    private: // attributen (eigenschappen) - hier allemaal private
        int width, height;
        float transparency;

    public: // methods, of member-functions (gedrag) - hier allemaal public
        // de constructor (hoe maak ik deze class)
        Rectangle(int w, int h);

        // zet de transparantie (alpha-kanaal
        void setTransparency(float a);

        // bereken 't oppervlak
        int area();

        // teken deze rechthoek
        void draw();
};