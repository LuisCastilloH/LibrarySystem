#include <iostream>
#include <string>

#include "../include/Book.h"

// constructors
Book::Book(int idM, string titulo, int num, string a):Material(idM,titulo) {
    numPag = num;
    autor = a;
}

Book::Book() {
    numPag = -1;
    autor = "N/D";
}
// implementation of setters
void Book::setNumPag(int num) {
    numPag = num;
}
void Book::setAutor(string a) {
    autor = a;
}
// implementation of getters
int Book::getNumPag() {
    return numPag;
}
string Book::getAutor() {
    return autor;
}
// implementation of inherited abstract methods
void Book::muestraDatos() {
    cout << "Tipo de material: Book \t" << "ID: " << idMaterial << " \t";
    cout << "Titulo: " << title << " \t";
    cout << "Autor: " << autor << " \t" << "Num de Pgs: " << numPag << endl;
}
int Book::cantidadDiasPrestamo() {
    // se presta 7 dias predeterminadamente
    return 7;
}