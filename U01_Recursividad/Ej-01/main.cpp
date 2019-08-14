#include <iostream>
#include "potencia.h"

int main() {
    std::cout << "Ejercicio 01/01\n" << std::endl;

    unsigned  int base, exponente;
    std::cout << "Ingrese base y exponente positivas" << std::endl;
    std::cin >> base >> exponente;
    std::cout << potencia(base, exponente) << std::endl;

    return 0;
}