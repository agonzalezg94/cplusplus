#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person
{
    //!< Atributos privados
  private:
    //!< Atributos protegidos
  protected:
    //!< Atributos publicos
  public:

  Student() : Person(){};
  Student(int iaEdad, std::string saNombre) : Person(iaEdad, saNombre){};
  virtual ~Student();
    //!< Metodos
   virtual void saluda();
};
#endif //STUDENT_H