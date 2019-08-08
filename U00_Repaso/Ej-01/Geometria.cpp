#include "Geometria.h"

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

