#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    Lista<float> lista;
    float dato;
    int x;

    std::cout << "Insertar elementos de la lista" << std::endl;
    for(int i=0; i<8; i++) {
        std::cin >> dato;
        lista.insertarUltimo(dato);
    }

    std::cout << "Ingrese un nuevo elemento" << std::endl;
    std::cin >> dato;
    std::cout << "\nDonde deberia ingresarlo?";
    std::cout << "\n1.Primero \n2.Al medio \n3.Al final" << std::endl;
    std::cin >> x;
    switch(x) {
        case 1:
            lista.insertarPrimero(dato);
            break;
        case 2:
            lista.insertar(lista.getTamanio()/2, dato);
            break;
        case 3:
            lista.insertarUltimo(dato);
            break;
        default:
            std::cout << "\nOpcion no existente. Insertando al final..." << std::endl;
            lista.insertarUltimo(dato);
    }

    for(int i=0; i<9; i++) {
        std::cout << lista.getDato(i) << std::endl;
    }

    return 0;
}