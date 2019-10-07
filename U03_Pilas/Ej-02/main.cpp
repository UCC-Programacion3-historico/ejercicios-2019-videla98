#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;

    Pila<int> p1, p2;
    int n, dato;
    bool b = true;

    std::cout << "Ingrese el tamaño de las pilas: ";
    std::cin >> n;
    std::cout << "Ingrese datos a la pila 1..." << std::endl;
    for (int i = 0; i < n ; ++i) {
        std::cin >> dato;
        p1.push(dato);
    }

    std::cout << "Ingrese datos a la pila 2..." << std::endl;
    for (int i = 0; i < n ; ++i) {
        std::cin >> dato;
        p2.push(dato);
    }

    while(!p1.esVacia() && b) {
        b = p1.pop() == p2.pop();
    }

    if(b)
        std::cout << "Las pilas son iguales";
    else
        std::cout << "Las pilas no son iguales";

    return 0;
}