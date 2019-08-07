#include <iostream>
#include "Calculadora.h"

int main() {
    Calculadora<int, float> miCalc;

    std::cout << miCalc.divi(9,4) << std::endl;
    std::cout << "Ejercicio 00/02\n" << std::endl;
    return 0;
}