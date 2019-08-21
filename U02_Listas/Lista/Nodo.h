//
// Created by Agus on 21/8/2019.
//

#ifndef NODO_H
#define NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo<T> *next;
public:
    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        this->dato = dato;
    }

    Nodo *getNext() const {
        return next;
    }

    void setNext(Nodo *next) {
        this->next = next;
    }
};

#endif //NODO_H
