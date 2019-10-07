#include <iostream>
#include "mcd.h"

int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;
    int a = 0,
        b = 0,
        aux = 0;

    std::cout << "Ingrese a y b" << std::endl;

    std::cin >> a >> b;

    if(b > a) {
        aux = b;
        b = a;
        a = aux;
    }

    std::cout << "Maximo comun divisor: " << mcd(a, b);

    return 0;
}