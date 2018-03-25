
#include "../lib/Teacher.h"

Teacher::Teacher()
{
    std::cout << "Hola, soy el profesor" << endl;
}

Teacher::Teacher(std::string saNombre)
{
    this->sNombre = saNombre;
    std::cout << "Hola, soy el profesor y me llamo " << this->sNombre << endl;
}

Teacher::~Teacher()
{
    std::cout << "Adios, soy profesor y me voy" << endl;
}

void Teacher::saluda()
{
    std::cout << "Buenas, soy profesor, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios "<< endl;
}