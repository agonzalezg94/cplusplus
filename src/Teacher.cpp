
#include "../lib/Teacher.h"
#include "../lib/Person.h"

Teacher::Teacher()
    : Person(int iaEdad, std::string saNombre)
{
    std::cout << "Hola, soy el profesor" << endl;
    this->sNombre = saNombre;
    this->iEdad = iaEdad;
}

Teacher::Teacher(std::string saNombre)
    : Person()
{
    this->sNombre = saNombre;
    this->iEdad = 34;
    std::cout << "Hola, soy el profesor y me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios" << endl;
}

Teacher::~Teacher()
{
    std::cout << "Adios, soy profesor y me voy" << endl;
}

virtual void Teacher::saluda()
{
    std::cout << "Buenas, soy alumno, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios "<< endl;
}