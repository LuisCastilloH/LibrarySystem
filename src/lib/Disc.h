#pragma once

#include <iostream>
#include <string>

#include "Material.h"

class Disc : public Material {
    private:
        int length;
        std::string genre;
    public:
        // constructors
        Disc(int, std::string, int, std::string);
        Disc();
        ~Disc();
        // setters
        void setLength(int);
        void setGenre(std::string);
        // getters
        int getLength();
        std::string getGenre();
        // inherited abstract methods
        void showData();
        int loanDays();

};