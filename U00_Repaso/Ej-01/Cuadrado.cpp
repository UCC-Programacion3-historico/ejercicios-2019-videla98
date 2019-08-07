#include "Cuadrado.h"
#include <math.h>
#include <iostream>

void Cuadrado::getPerimetro() {
    std::cout << "Perimetro: " << alto*2 + ancho*2 << "um" << std::endl;
}

void Cuadrado::getSuperficie() {
    std::cout << "Superficie: " << alto * ancho << "um^2" << std::endl;
}

void Cuadrado::getDiagonal() {
    std::cout << "Diagonal: " << sqrt(ancho*ancho + alto*alto) << "um" << std::endl;
}

void Cuadrado::queSoy() {
    std::cout << "Soy un Cuadrado C=" << std::endl;
}