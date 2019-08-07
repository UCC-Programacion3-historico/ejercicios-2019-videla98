#ifndef REPASO_CIRCULO_H
#define REPASO_CIRCULO_H
#include "Geometria.h"

class Circulo: public Geometria{
protected:
    float radio;
public:
    Circulo(float xLado, int xColor):Geometria(xLado,xColor) { radio = alto/2; }
    void getRadio();
    void getSuperficie();
    void getPerimetro();
    void queSoy();
};


#endif //REPASO_CIRCULO_H
