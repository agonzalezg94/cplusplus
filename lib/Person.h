#ifndef PERSON_H
#define PERSON_H
#include <iostream>

/**!    \class Person
 *          \brief  Describe la clase person. Define a una persona
 *          Dicha clase pasara a ser abstracta de forma que no tendra implementacion directa
 *          sino que las implementaciones se harána través de las clases derivadas
 */
using namespace std;

class Person
{
    protected:
        int iEdad;
        std::string sNombre;
    public:
        
        //!< Constructor por defecto
        Person();
        //!< Constructor con edad y nombre
        Person(int iaEdad, std::string saNombre);

        //!< Destructor
        virtual ~Person();

        std::string getNombre();
        int getEdad();
        void setNombre(std::string argSNombre);
        void setEdad(int argiEdad);
        /**!    Una clase virtual pura debe ser declara en cada una de las clases derivadas sino dara error
         */
        virtual void saluda() = 0;                  //!< Esto indica que el metodo es virtual puro
};
#endif //PERSON_H
