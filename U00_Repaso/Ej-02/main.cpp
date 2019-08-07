#include <iostream>
#include "Calculadora.h"

int main() {
    Calculadora<int, int> miCalc;

    std::cout << miCalc.divi(8,4) << std::endl;
    std::cout << "Ejercicio 00/02\n" << std::endl;
    return 0;
}