#include "Person.h"

class Student : public Person
{
    //!< Atributos privados
  private:
    //!< Atributos protegidos
  protected:
    //!< Atributos publicos
  public:

  Student();
  Student(int iaEdad, std::string saNombre);
  virtual ~Student();
    //!< Metodos
   virtual void saluda();
};