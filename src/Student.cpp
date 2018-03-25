
#include "../lib/Student.h"
#include "../lib/Person.h"

Student::Student()
{
    std::cout << "Hola, soy un alumno" << endl;
}
Student::Student(std::string saNombre)
{
    this->sNombre = saNombre;
    std::cout << "Hola, soy un alumno y me llamo " << this->sNombre << endl;
}

Teacher::~Teacher()
{
    std::cout << "Adios, soy el alumno" << this->sNombre << " y me voy" << endl;
}

void Teacher::saluda()
{
    std::cout << "Buenas, soy profesor, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios " << endl;
}