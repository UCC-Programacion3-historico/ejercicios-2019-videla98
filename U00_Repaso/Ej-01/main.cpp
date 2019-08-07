#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"


int main() {
    std::cout << "Ejercicio 00/01\n" << std::endl;
    Cuadrado rocky(2,3,2);
    Triangulo julieta(4, 2, 56, 3);
    Circulo icaro(13, 1);
    rocky.queSoy();
    rocky.getPerimetro();
    rocky.getSuperficie();
    rocky.getDiagonal();
    rocky.color.getColor();
    std::cout << std::endl;
    julieta.queSoy();
    julieta.getAngulo();
    julieta.getPerimetro();
    julieta.getSuperficie();
    julieta.color.getColor();
    std::cout << std::endl;
    icaro.queSoy();
    icaro.getRadio();
    icaro.getPerimetro();
    icaro.getSuperficie();
    icaro.color.getColor();
    return 0;
}