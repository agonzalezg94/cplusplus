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
        /**! Con .reserve() reservamos el espacion en memoria suficiente para el argumento que le damos de esta forma nos aseguramos que habrá espacio suficiente
         *      Esto no inicializa el vector. 
         */
        oPerson.reserve(MAX_PERSON);
        //!< Construccion de los objetos
        for (i = 0; i < N_PERSONAS; i++)
        {
            std::cout << "Introduzca edad de la persona " << i+1 << " :" << endl;
            std::cin >> edad;
            std::cout << "Introduzca el nombre de la persona " << i+1 << " :" << endl;
            std::cin >> nombre;
            oPerson.push_back(new Person(edad, nombre));
        }

        int masPersonas;
        std::cout << "Cuantas personas mas quieres declarar?: " << endl; 
        std::cin >> masPersonas;
        //!< Para reasignar espacio al vector es necesario usar el metodo .resize()
        /**!    myVector.resize();
         *      \brief  resize es usado para redimensionar el tamaño del vector. De forma que si en este punto el vector de objetos persona tiene
         *      una dimension de 4 cuando nosotros habiamos reservado espacio para 10 podemos redimensionar su espacio a 4.
         *      -Si se usa resize(arg1,arg2) con arg 1 marcamos el nuevo tamaño del vector, en arg2 el valor de inicializacion en caso de quesea un tama
         *          ño mayor. Si fuera un tamañano menor se eliminan las componentes correspondientes.
         */
        //oPerson.resize(N_PERSONAS+masPersonas, nullptr);                                    //!< Redimensionamos el vector y lo inicializamos con punteros nulos
        std::cout << "Muestra el tamanio actual del contenedor: " << oPerson.size() << endl;
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
        for (i = 0; i < oPerson.size(); i++)                                    //!< Borra todas las personas
            delete oPerson[i];
        
        //!< Por ultimo borra el contenedor para liberar memoria
        /**!    Delete[] es usado para borrar tipos array
         *      delete sin [] es para borrar punteros individuales
         */
        
        //!< Una vez se ha realizado la eliminacion de todos los punteros, comprobamos el tamaño del vector
        std::cout << "Ahora el tamanio del contenedor es: " << oPerson.size() << endl;  

        //!< La funcion .swap es usada para cambiar los elementos de un vector a otro
        /**! de forma que si oPerson.swap(oPerson2): los elementos, dimensiones y demas de oPerson se inter
         * cambiarian por los de oPerson2
         */
        oPerson.resize(0);
        std::cout << "Ahora el tamanio del contenedor es: " << oPerson.size() << endl;
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