#include "Cuadrado.h"
#include <math.h>
#include <iostream>

float Cuadrado::getPerimetro() {
    return alto*2 + ancho*2;
}

float Cuadrado::getSuperficie() {
    return alto * ancho;
}

float Cuadrado::getDiagonal() {
    return sqrt(ancho*ancho + alto*alto);
}

void Cuadrado::queSoy() {
    std::cout << "Soy un Cuadrado" << std::endl;
}