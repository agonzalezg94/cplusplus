#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"

class Teacher : public Person
{
    //!< Atributos privados
    private:

    //!< Atributos protegidos
    protected:

    //!< Atributos publicos
    public:
    //!< Constructor por defecto
    Teacher() : Person(){};

    //!< Constructor definido por el nombre
    Teacher(int iaEdad, std::string saNombre) : Person(iaEdad, saNombre){};

    //!< Destructor de la clase
    virtual ~Teacher();

    //!< Metodos
    virtual void saluda();
};
#endif //TEACHER_H