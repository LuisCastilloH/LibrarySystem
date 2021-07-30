#pragma once

#include <iostream>
#include <string>

class Material {
    protected:
        int idMaterial;
        std::string title;
    public:
        // constructors
        Material(int, std::string);
        Material();
        // setters
        void setIdMaterial(int);
        void setTitle(std::string);
        // getters
        int getIdMaterial();
        std::string getTitle();
        // abtstract methods
        virtual void showData() = 0;
        virtual int loanDays() = 0;
};