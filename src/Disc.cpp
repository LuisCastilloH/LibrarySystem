#include <iostream>
#include <string>

#include "../include/Disc.h"

// constructors
Disc::Disc(int id, std::string title, int length, std::string genre) : Material(id, title)
{
    this->length = length;
    this->genre = genre;
}

Disc::Disc()
{
    this->length = -1;
    this->genre = "";
}

// setters
void Disc::setLength(int length)
{
    this->length = length;
}

void Disc::setGenre(std::string genre)
{
    this->genre = genre;
}

// getters
int Disc::getLength()
{
    return length;
}

std::string Disc::getGenre()
{
    return genre;
}

void Disc::showData()
{
    std::cout << "Material type: Disc\t" << "id: " << idMaterial << " \t";
    std::cout << "Title " << title << " \tLength " << length << " \t";
    std::cout << "Genre: " << genre << std::endl;
}

int Disc::loanDays()
{
    return 2;
}