#include "Circulo.h"
#include <iostream>
#include <cmath>

float Circulo::getRadio() {
    return radio;
}

float Circulo::getSuperficie() {
    return M_PI * radio*radio;
}

float Circulo::getPerimetro() {
    return 2 * M_PI * radio;
}

void Circulo::queSoy() {
    std::cout << "Soy un Circulo" << std::endl;
}
