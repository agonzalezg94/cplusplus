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