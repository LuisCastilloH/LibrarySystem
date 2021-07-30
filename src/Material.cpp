#include <iostream>
#include <string>

#include "../include/Material.h"

// constructors
Material::Material(int id, std::string title)
{
    this->idMaterial = id;
    this->title = title;
}

Material::Material()
{
    this->idMaterial = -1;
    this->title = "";
}

// setters
void Material::setIdMaterial(int id)
{
    this->idMaterial = id;
}

void Material::setTitle(std::string title)
{
    this->title = title;
}

// getters
int Material::getIdMaterial()
{
    return this->idMaterial;
}

std::string Material::getTitle()
{
    return this->title;
}