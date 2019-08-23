#include "Triangulo.h"
#include <iostream>

float Triangulo::getAngulo() {
    return angulo;
}

float Triangulo::getPerimetro() {
    return ancho*3;   //valor aleatorio porque no sé cómo sacar el perímetro con los datos que tengo
}

float Triangulo::getSuperficie() {
    return alto*ancho;
}

void Triangulo::queSoy() {
    std::cout << "Soy un Triangulo" << std::endl;
}