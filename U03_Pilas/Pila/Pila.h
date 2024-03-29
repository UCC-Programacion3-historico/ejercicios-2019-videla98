#ifndef PILA_H
#define PILA_H

#include "Nodo.h"

/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Pila {
private:
    Nodo<T> *top;
public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();

    bool esVacia();

    T peek();
};


/**
 * Constructor de la clase Pila
 * @tparam T
 */
template<class T>
Pila<T>::Pila() {
    top = nullptr;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Pila<T>::~Pila() {
    Nodo<T> *toDelete;
    while(top != nullptr){
        toDelete = top;
        top = top->getNext();
        delete [] toDelete;
    }
}


/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Pila<T>::push(T dato) {
    auto *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setNext(top);
    top = nuevo;
}


/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Pila<T>::pop() {
    if(esVacia())
        throw 404;
    T aux = top->getDato();
    auto toDelete = top;

    top = top->getNext();
    delete [] toDelete;

    return aux;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Pila<T>::esVacia() {
    return top == nullptr;
}

template<class T>
T Pila<T>::peek() {
    return top->getDato();
}

#endif //LISTA_H