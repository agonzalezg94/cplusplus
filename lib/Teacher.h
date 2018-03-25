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
    Teacher(std::string saNombre);

    //!< Destructor de la clase
    ~Teacher();

    //!< Metodos
    void saluda();


};