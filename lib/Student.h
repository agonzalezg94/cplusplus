#ifndef STUDENT_H
#define STUDENT_H

/**! Es necesario definir la cabecera STUDENT_H para que no recompile la clase mas tarde
 */
#include "Person.h"

class Student : public Person
{
    //!< Atributos privados
  private:
    //!< Atributos protegidos
  protected:
    //!< Atributos publicos
  public:

    /**! Los constructores de las clases derivadas se declaran simplemente con su nombre. En la implementacion
     * se hace mencion a la clase base.
     * 1. Constructor vacio. Asigna por defecto
     * 2. Constructor por parametros. recibe la edad y el nombre
     */
  Student();
  Student(int iaEdad, std::string saNombre);
  virtual ~Student();
    //!< Metodos
    /**! El metodo a continuacion es virtual. se declara en la clase base Person pero en profesor, tomara
     * un valor distinto que en la otra clase derivada, alumno. De echo, esta no toma implementacion en 
     * la clase Person. Directamente se realiza en las clases derivadas
     */
   virtual void saluda();
};
#endif //STUDENT_H