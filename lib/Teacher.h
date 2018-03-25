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
    Teacher();

    //!< Constructor definido por el nombre
    Teacher(int iaEdad, std::string saNombre);

    //!< Destructor de la clase
    virtual ~Teacher();

    //!< Metodos
    virtual void saluda();


};