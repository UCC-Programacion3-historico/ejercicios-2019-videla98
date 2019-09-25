#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *head, *tail;
public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();

    T peek();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    head = nullptr;
    tail = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
    auto *nuevo = new Nodo<T>(); //"auto" asigna el tipo de puntero automaticamente (Nodo<T>)
    nuevo->setDato(dato);
    nuevo->setNext(nullptr);

    if(tail == nullptr){
        head = nuevo;
    } else {
    tail->setNext(nuevo);
    }
    tail = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    T temp = head->getDato();

    if(head == nullptr){
        throw 404;
    }

    Nodo<T> *toDelete = head;

    head = head->getNext();

    if(head == nullptr){
        tail == nullptr;
    }

    delete toDelete;
    return temp;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return head == nullptr;
}

template <class T>
T Cola<T>::peek() {
    if(head == nullptr)
        throw 404;

    return head->getDato();
}

#endif //LISTA_H