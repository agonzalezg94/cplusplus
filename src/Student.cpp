
#include "../lib/Student.h"
#include "../lib/Person.h"

Student::Student()
    : Person()
{
    std::cout << "Hola, soy un alumno" << endl;
    this->iEdad=12;
    this->sNombre="Pepito";
}
Student::Student()
    : Person(int iaEdad, std::string saNombre)
{
    this->sNombre = saNombre;
    this->iEdad=iaEdad;
    std::cout << "Hola, soy un alumno y me llamo " << this->sNombre << endl;
}

Teacher::~Teacher()
{
    std::cout << "Adios, soy el alumno" << this->sNombre << " y me voy" << endl;
}

virtual void Teacher::saluda()
{
    std::cout << "Buenas, soy profesor, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios " << endl;
}