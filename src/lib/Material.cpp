#pragma once

#include <iostream>
#include <string>

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
void setIdMaterial(int id)
{
    this->idMaterial = id;
}

void setTitle(std::string title)
{
    this->title = title;
}

// getters
int getIdMaterial()
{
    return idMaterial;
}

std::string getTitle()
{
    return title;
}