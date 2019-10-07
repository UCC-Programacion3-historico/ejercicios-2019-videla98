#include <iostream>
#include "../Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 03/01\n" << std::endl;

    Pila<char> p1;
    char temp1 = ' ';

    std::cout << "Ingrese palabra a invertir. Ingrese 0 para finalizar la palabra" << std::endl;

    while(temp1 != '0') {
        std::cin >> temp1;
        p1.push(temp1);
    }

    p1.pop();

    std::cout << "\nPalabra invertida: ";
    while(!p1.esVacia()) {
        std::cout << p1.pop();
    }

    return 0;
}