
#include "../lib/Teacher.h"
#include "../lib/Person.h"

/**! \fn Teacher(iaEdad:int, saNombre:string).
 * \brief Es el constructor de la clase derivada \a Teacher. Este toma unas acciones singulares res
 * pecto a la clase base, \a Person
 *  -Como podemos ver, en la implantacion es necesario hacer referencia a la clase base, como
 *  esta construida, pues estos parametros son pasados de una clase a otra.
 */
Teacher::Teacher(int iaEdad, std::string saNombre)
    : Person(iaEdad, saNombre)
{
    std::cout << "Hola, soy el profesor" << endl;
    this->sNombre = saNombre;
    this->iEdad = iaEdad;
}

Teacher::Teacher()
    : Person()
{
    this->sNombre = "Pepito";
    this->iEdad = 34;
    std::cout << "Hola, soy el profesor y me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios" << endl;
}

/**! \brief Definicion del destructor virtual. Este no toma implantacion en Person. Solo se declara en las clases
 * derivadas al ser virtual.
 */
Teacher::~Teacher()
{
    std::cout << "Adios, soy profesor y me voy" << endl;
}

void Teacher::saluda()
{
    std::cout << "Buenas, soy profesor, me llamo " << this->sNombre << " y tengo " << this->iEdad << " anios "<< endl;
}