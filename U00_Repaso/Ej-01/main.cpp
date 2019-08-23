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
    std::cout << "Perimetro: " << rocky.getPerimetro() << std::endl;
    std::cout << "Superficie: " << rocky.getSuperficie() << std::endl;
    std::cout << "Diagonal: " << rocky.getDiagonal() << std::endl;
    rocky.color.getColor();
    std::cout << std::endl;
    julieta.queSoy();
    std::cout << "Angulo: " << julieta.getAngulo() << std::endl;
    std::cout << "Perimetro: " << julieta.getPerimetro() << std::endl;
    std::cout << "Superficie: " << julieta.getSuperficie() << std::endl;
    julieta.color.getColor();
    std::cout << std::endl;
    icaro.queSoy();
    std::cout << "Radio: " << icaro.getRadio() << std::endl;
    std::cout << "Perimetro: " << icaro.getPerimetro() << std::endl;
    std::cout << "Superficie:" << icaro.getSuperficie() << std::endl;
    icaro.color.getColor();
    return 0;
}