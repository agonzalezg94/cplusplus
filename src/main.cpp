#include <iostream>
#include <vector>
#include "../lib/Person.h"

using namespace std;

#define VECTOR_SIZE 2
#define MAX_PERSON 10
/**!
 *  \brief Ejemplo para practicar con vectores
 */
int mediaAritmetica(std::vector<int> aVector);

int main(void)
{
    int N_PERSONAS,i,edad;
    std::string nombre;
    std::cout << "Cuantas personas hay?: " << endl;
    std::cin >> N_PERSONAS;


    if (N_PERSONAS < MAX_PERSON)
    {
        //!< Declaracion del vector de punteros a objetos persona
        std::vector<Person *> oPerson;

        //!< Reserva del espacion
        oPerson.reserve(MAX_PERSON);
        //!< Construccion de los objetos
        for (i = 0; i < N_PERSONAS; i++)
        {
            std::cout << "Introduzca edad de la persona " << i+1 << " :" << endl;
            std::cin >> edad;
            std::cout << "Introduzca el nombre de la persona " << i+1 << " :" << endl;
            std::cin >> nombre;
            oPerson[i] = new Person(edad, nombre);
        }

        int masPersonas;
        std::cout << "Cuantas personas mas quieres declarar?: " << endl; 
        std::cin >> masPersonas;
        //!< Para reasignar espacio al vector es necesario usar el metodo .resize()
        /**!    myVector.resize();
         *      \brief  
         */
        oPerson.reserve(N_PERSONAS+masPersonas);
        for (i=N_PERSONAS; i< (N_PERSONAS + masPersonas); i++)
        {
            std::cout << "Introduzca edad de la persona " << i + 1 << " :" << endl;         //!< Introduce por consola la edad de la persona
            std::cin >> edad;   
            std::cout << "Introduzca el nombre de la persona " << i + 1 << " :" << endl;    //!< Introduce por consola el nombre de la persona
            std::cin >> nombre;
            oPerson.push_back(new Person(edad, nombre));                                    //!< Introduce en el ultimo lugar un nuevo puntero a objeto person
        }

        //!< Saluda cada una de las personas
        for (i = 0; i < (N_PERSONAS + masPersonas); i++)                                    //!< Utiliza el metodo saluda para mostrar el saludo de cada persona
            oPerson[i]->saluda();

        //!< Destruye los objetos
        for (i = 0; i < (MAX_PERSON + masPersonas); i++)                                    //!< Borra todas las personas
            delete oPerson[i];
        
        //!< Por ultimo borra el contenedor para liberar memoria
        /**!    Delete[] es usado para borrar tipos array
         *      delete sin [] es para borrar punteros individuales
         */
        delete[] oPerson;                                           
    }
    else
    {
        std::cout << "Superado el limite maximo de personas" << endl;
    }


    system("pause");

    return 0;
}

int mediaAritmetica(std::vector<int> aVector){
    //!< Calcula la media
    int iSum,i;
    iSum=0;
    for (i=0;i<aVector.size();i++)
        iSum = iSum + aVector[i];
    return iSum/i;
}