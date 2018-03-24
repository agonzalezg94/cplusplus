#include <iostream>

/**!    \class Person
 *          \brief  Describe la clase person. Define a una persona
 */
using namespace std;

class Person
{
    private:
        int iEdad;
        std::string sNombre;
    public:
        
        //!< Constructor por defecto
        Person();
        //!< Constructor con edad y nombre
        Person(int iaEdad, std::string saNombre);

        //!< Destructor
        ~Person();

        std::string getNombre();
        int getEdad();
        void setNombre(std::string argSNombre);
        void setEdad(int argiEdad);
        void saluda();
};
