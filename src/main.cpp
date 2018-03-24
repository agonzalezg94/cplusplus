#include <iostream>
#include <vector>
#include "../lib/Person.h"

using namespace std;

#define VECTOR_SIZE 2
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
    Person *oPerson;
    oPerson = new Person(23, "Pedro");
    oPerson->saluda();
    delete oPerson;
    //!< Declaracion de tres personas
  /*  for (i = 0; i < N_PERSONAS; i++)
    {
        Person *oPerson[i];
    }
    for (i = 0; i < N_PERSONAS; i++)
    {
        std::cout << "Edad persona" << i << ": " << endl;
        std::cin >> edad;
        std::cout << "Nombre persona" << i << ": " << endl;
        std::cin >> nombre;
        oPerson[i] = new Person(edad, nombre);
    }*/

    //!< Presentacion de las personas
   /* for (i = 0; i < N_PERSONAS; i++)
    {
        oPerson[i]->saluda();
    }

    //!< Eliminacion de los objetos
    for (i = 0; i < N_PERSONAS; i++)
    {
        delete oPerson[i];
    }*/
    /*   std::vector<int> myVector(VECTOR_SIZE);
    int i,limit, nuevoValor;
    std::cout << "Introduce el valor limite: \t" << endl;
    std::cin >> limit;

    for (i=0; i<VECTOR_SIZE; i++){
        std::cout << "Rellena los valores iniciales del vector \n" << endl;
        std::cin >> myVector[i];
    } 
    std::cout << "Muestra el tamanio del vector \n" << endl;
    std::cout << myVector.size() << endl;

    for (i = 0; i < limit; i++)
    {
        std::cout << "Aniade valor: " << endl;
        cin >> nuevoValor;
        myVector.push_back(nuevoValor);
    }

    std::cout << "Muestra el tamanio del vector \n" << endl;
    std::cout << myVector.size() << "\n" << endl;;

    std::cout << "Muestra el vector \n" << endl;
    for (i=0; i < myVector.size(); i++){
        std::cout << myVector[i] << "\n" << endl;
    }

    int iErase;
    std::cout << "Introduce cuantos valores quieres eliminar: " << endl;
    std::cin >> iErase;
    if (iErase < myVector.size()) std::cout << "Valor valido \n" << endl;
    std::cout << "Vamos a eliminar los valores del vector" << endl;

    for (i=0; i < iErase; i++)
        myVector.pop_back();

    std::cout << "Muestra el tamanio del vector \n" << endl;
    std::cout << myVector.size() << "\n" << endl;
    

    std::cout << "Muestra el vector" << endl;
    for (i = 0; i < myVector.size(); i++)
    {
        std::cout << myVector[i] << "\n" << endl;
    }

    std::cout << "Realiza la media aritmetica de los valores del vector \n" << endl;

    //!< \fn mediaAritmetica: calcula la media de los valores del vector
    std::cout << mediaAritmetica(myVector) << endl;
*/
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