#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H
#include <string>
#include "Color.h"

class Geometria {
protected:
    Geometria();
    Geometria(float, int);
    Geometria(float, float, int);
    float ancho;
    float alto;
    virtual float getSuperficie();
    virtual float getPerimetro();
    virtual void queSoy();
public:
    Color color;
};


#endif //REPASO_GEOMETRIA_H
