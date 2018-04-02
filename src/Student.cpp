
#include "Student.h"
#include "Person.h"

Student::Student()
    : Person()
{
    std::cout << "Hola, soy un alumno" << endl;
    this->iEdad=12;
    this->sNombre="Pepito";
}
Student::Student(int iaEdad, std::string saNombre)
    : Person(iaEdad, saNombre)
{
    this->sNombre = saNombre;
    this->iEdad=iaEdad;
    std::cout << "Hola, soy un alumno y me llamo " << this->sNombre << endl;
}

Student::~Student()
{
    std::cout << "Adios, soy el alumno" << this->sNombre << " y me voy" << endl;
}

void Student::saluda()
{
    std::cout << "Buenas, soy alumno, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios " << endl;
}