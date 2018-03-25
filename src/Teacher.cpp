
#include "../lib/Teacher.h"
#include "../lib/Person.h"

Teacher::Teacher()
{
    std::cout << "Hola, soy el profesor" << endl;
    this->sNombre = "Pepito";
    this->iEdad = 34;
}

Teacher::Teacher(std::string saNombre)
{
    this->sNombre = saNombre;
    this->iEdad = 34;
    std::cout << "Hola, soy el profesor y me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios" << endl;
}

Teacher::~Teacher()
{
    std::cout << "Adios, soy profesor y me voy" << endl;
}

void Teacher::saluda()
{
    std::cout << "Buenas, soy alumno, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios "<< endl;
}