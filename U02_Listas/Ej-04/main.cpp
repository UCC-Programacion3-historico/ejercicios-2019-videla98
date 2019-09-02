#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista<int> li, l2;
    int dato;

    std::cout << "Insertar elementos de la lista 1" << std::endl;
    for(int i=0; i<8; i++) {
        std::cin >> dato;
        li.insertarUltimo(dato);
    }

    std::cout << "Insertar elementos de la lista 2" << std::endl;
    for(int i=0; i<8; i++) {
        std::cin >> dato;
        l2.insertarUltimo(dato);
    }

    Lista<int> l3 = unir(li, l2);

    std::cout << "Lista 1:" << std::endl;
    for(int i = 0; i<li.getTamanio(); i++){
        std::cout << li.getDato(i) << std::endl;
    }

    std::cout << "Lista 2:" << std::endl;
    for(int i = 0; i<l2.getTamanio(); i++){
        std::cout << l2.getDato(i) << std::endl;
    }

    std::cout << "Lista 3:" << std::endl;
    for(int i = 0; i<l3.getTamanio(); i++){
        std::cout << l3.getDato(i) << std::endl;
    }

    return 0;
}