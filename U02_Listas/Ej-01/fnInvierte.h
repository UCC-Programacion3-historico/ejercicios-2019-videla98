#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){
    int t = lis->getTamanio();
    for(int i = 0; i<t; i++) {
        lis->insertar(i, lis->getDato(t - 1));
        lis->remover(t);
    }
}

#endif //FNINVIERTE_H
