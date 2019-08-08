#include "Triangulo.h"
#include <iostream>

void Triangulo::getAngulo() {
    std::cout << "Angulo: " << angulo << "°" << std::endl;
}

void Triangulo::getPerimetro() {
    std::cout << "Perimetro: " << "como saco el perimetro con tan pocos datos" << "um^2" << std::endl;
}

void Triangulo::getSuperficie() {
    std::cout << "Superficie: " << (alto*ancho) / 2 << "um^2" << std::endl;
}

void Triangulo::queSoy() {
    std::cout << "Soy un Triangulo" << std::endl;
}