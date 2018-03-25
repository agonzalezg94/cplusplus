#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include "Student.h"
#include <vector>

class Teacher : public Person
{
    //!< Atributos privados
    private:

    //!< Atributos protegidos
    protected:

    //!< Atributos publicos
    public:
    //!< Constructor por defecto
    Teacher();// : Person(){};

    //!< Constructor definido por el nombre
    Teacher(int iaEdad, std::string saNombre);// : Person(iaEdad, saNombre){};

    //!< Destructor de la clase
    virtual ~Teacher();

    //!< Metodos
    virtual void saluda();
    //!< Definicion del metodo expulsar. Expulsa a un numero introducido de alumnos.
    /**! \fn expulsar()
     *  \brief Pasado un vector contenedor de alumnos, los elimina. Tantos como se diga. 
     * Estos seran pasados por referencia
     * \param nAlumnos:int -> numero de alumnos
     * \param vContenedor:std::vector<Student &> -> referencia a vector de alumnos
     */
    void expulsar(int nAlumnos, std::vector<Student*> &orStudents);
};
#endif //TEACHER_H