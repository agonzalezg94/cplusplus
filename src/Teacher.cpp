
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
    std::cout << "Hola, soy el profesor. Me llamo " << this->sNombre << " y tengo " << this->iEdad
    << " anios" << endl;
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

/**! Paso por referencia. Se pasa el contenedor de punteros a objetos Student por referencia,
 * es decir, cualquier cambio aplicado dentro de la funcion a este contenedor, tendra efecto
 * en el contenedor externo
 */
void Teacher::expulsar(int nAlumnos, std::vector<Student*> &orStudents)
{
    int i;
    std::cout << "Soy el profesor " << this->sNombre << " y voy a expulsar de mi  clase a"
    << nAlumnos << " alumnos" << endl;

    for (i=0; i<nAlumnos; i++)
        orStudents.pop_back();

    std::cout << "Profesor: bueno, ahora en la clase hay: " << orStudents.size() << " alumnos" << endl;
}