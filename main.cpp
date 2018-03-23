#include <iostream>
#include <vector>

using namespace std;

#define VECTOR_SIZE 2
/**!
 *  \brief Ejemplo para practicar con vectores
 */
int main (void){

    std::vector<int> myVector(VECTOR_SIZE);
    int i,limit, nuevoValor;
    std::cout << "Introduce el valor limite: " << endl;
    std::cin >> limit;

    for (i=0; i<VECTOR_SIZE; i++){
        std::cout << "Rellena los valores iniciales del vector" << endl;
        std::cin >> myVector[i];
    } 
    std::cout << "Muestra el tamanio del vector \n" << endl;
    std::cout << myVector.size();

    for (i = 0; i < limit; i++)
    {
        std::cout << "Aniade valor: " << endl;
        cin >> nuevoValor;
        myVector.push_back(nuevoValor);
    }

    std::cout << "Muestra el tamanio del vector \n" << endl;
    std::cout << myVector.size();

    std::cout << "Muestra el vector" << endl;
    for (i=0; i < myVector.size(); i++){
        std::cout << myVector[i] << "\n" << endl;
    }

    system("pause");

    return 0;
}