#include "Geometria.h"

Geometria::Geometria() {
    alto = 0;
    ancho = 0;
    color.tenirColor(0);
}

Geometria::Geometria(float xAlto, float xAncho, int xColor) {
    alto = xAlto;
    ancho = xAncho;
    color.tenirColor(xColor);
}

Geometria::Geometria(float xLado, int xColor) {
    alto = xLado;
    ancho = alto;
    color.tenirColor(xColor);
}