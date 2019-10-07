#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    Pila<char> p1;
    Cola<char> c1;
    char temp1 = ' ';
    bool b = true;

    c1.encolar('0');

    std::cout << "Ingrese frase. Para finalizar el tipeado ingrese 0" << std::endl;

    try {
        while (temp1 != '0') {
            std::cin >> temp1;
            p1.push(temp1);
            c1.encolar(temp1);
        }
    } catch (int x) {
        std::cout << "La excepcion " << x << " ha sido manejada ;)";
    }

    while (!p1.esVacia() && b) {
        b = p1.pop() == c1.desencolar();
    }

    if(b)
        std::cout << "\nLa frase es un palindromo";
    else
        std::cout << "\nLa frase no es un palindromo";

    return 0;
}