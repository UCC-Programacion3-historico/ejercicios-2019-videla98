#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/05\n" << std::endl;

    Lista<int> li;
    li.insertarUltimo(2);
    li.insertarUltimo(2);
    li.insertarUltimo(3);
    li.insertarUltimo(6);
    li.insertarUltimo(3);
    li.insertarUltimo(7);
    li.insertarUltimo(1);
    li.insertarUltimo(3);

    for (int j = 0; j < 8; ++j) {
        std::cout << li.getDato(j) << "->";
    }
    std::cout << "NULL" << std::endl;

    try{
        li.insertAfter2(4, 12, 9);
    } catch (char const *x) {
        std::cout << x << std::endl;
    }

    try {
        for (int j = 0; j < 9; ++j) {
            std::cout << li.getDato(j) << "->";
        }
        std::cout << "NULL" << std::endl;
    } catch (int x) {
        std::cout << "Programa terminado con excepcion " << x << std::endl;
    }

    return 0;
}