#include <iostream>
#include "../lib/Person.h"

Person::Person()
{
    iEdad = 20;
    sNombre = "Pepito";  

}

Person::Person(int iaEdad, std::string saNombre)
{
    iEdad = iaEdad;
    sNombre = saNombre;

}

Person::~Person()
{
    std::cout << "Adios, soy " << this->sNombre << "y me voy" << endl;
}

int Person::getEdad()
{
    return this->iEdad;
}

std::string Person::getNombre()
{
    return this->sNombre;
}

void Person::setEdad(int argiEdad)
{
    this->iEdad = argiEdad;
}

void Person::setNombre(std::string argSNombre)
{
    this->sNombre = argSNombre;
}

void Person::saluda()
{
    std::cout << "Hola, soy" << this->sNombre << "y tengo " << this->iEdad << "anios" << endl;
}