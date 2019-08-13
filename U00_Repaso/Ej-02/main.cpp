#include <iostream>
#include "Calculadora.h"

int main() {
    Calculadora<int, float> miCalc;
    std::cout << "Ejercicio 00/02\n" << std::endl;
    std::cout << "Dividir 9 entre 4" << std::endl;
    std::cout << miCalc.divi(9,4) << std::endl;
    std::cout << "Multiplicar 3 por 2" << std::endl;
    std::cout << miCalc.multi(3, 2) << std::endl;
    std::cout << "Restar 4 a 9" << std::endl;
    std::cout << miCalc.resta(9, 4) << std::endl;
    std::cout << "Sumar 7 a 2" << std::endl;
    std::cout << miCalc.suma(7, 2) << std::endl;
    return 0;
}