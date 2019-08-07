#include "Circulo.h"
#include <iostream>
#include <cmath>

void Circulo::getRadio() {
    std::cout << "Radio: " << radio << "um" << std::endl;
}

void Circulo::getSuperficie() {
    std::cout << "Superficie: " << M_PI * radio*radio << "um^2" << std::endl;
}

void Circulo::getPerimetro() {
    std::cout << "Perimetro: " << 2 * M_PI * radio << "um" << std::endl;
}

void Circulo::queSoy() {
    std::cout << "Soy un Circulo :D" << std::endl;
}
