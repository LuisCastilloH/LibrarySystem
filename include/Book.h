#pragma once

#include <iostream>
#include <string>
#include "Material.h"

using namespace std;

class Book : public Material {
    private:
        int numPag;
        string autor;
    public:
        // constructors
        Book(int, string, int, string);
        Book();
        // setters
        void setNumPag(int);
        void setAutor(string);
        // getters
        int getNumPag();
        string getAutor();
        // inherited abstract methods
        void muestraDatos();
        int cantidadDiasPrestamo();
};

