#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Lista {
private:
    Nodo<T> *start;
public:
    Lista();

    Lista(const Lista<T>& li);

    ~Lista();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    void remover(int pos);

    T getDato(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();

    void alInicio(T dato);
};


/**
 * Constructor de la clase Lista
 * @tparam T
 */
template<class T>
Lista<T>::Lista() {
    start = nullptr;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template<class T>
Lista<T>::Lista(const Lista<T>& li) {
    const Nodo<T> *cpyIn = li.start;
    Nodo<T> *nuevo, *cpyOut = nullptr;

    if(cpyIn != nullptr) {
        nuevo = new Nodo<T>;
        cpyOut = nuevo;
        cpyOut->setDato(cpyIn->getDato());
        this->start = cpyOut;
    } else {
        this->start = nullptr;
        return;
    }

    while(cpyIn->getNext() != nullptr) {
        cpyIn = cpyIn->getNext();
        nuevo = new Nodo<T>;
        cpyOut->setNext(nuevo);
        cpyOut = nuevo;
        cpyOut->setDato(cpyIn->getDato());
    }

    cpyOut->setNext(nullptr);
    //todo implementar constructor por copia
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Lista<T>::~Lista() {
    vaciar();
}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template<class T>
bool Lista<T>::esVacia() {
    return start == nullptr;
}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template<class T>
int Lista<T>::getTamanio() {
    Nodo<T> *aux = start;
    int cant = 0;

    while(aux != nullptr) {
        aux = aux->getNext();
        cant++;
    }

    return cant;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void Lista<T>::insertar(unsigned int pos, T dato) {
    int posActual = 0;
    Nodo<T> *aux = start, *nuevo;

    if(pos == 0){
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setNext(start);
        start = nuevo;
        return;
    }

    while(posActual < pos-1 && aux != nullptr){
        aux = aux->getNext();
        posActual++;
    }

    if(aux == nullptr)
        throw 404;

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setNext(aux->getNext());
    aux->setNext(nuevo);
}


/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarPrimero(T dato) {
    insertar(0, dato);
}

/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarUltimo(T dato) {
    Nodo<T> *aux = start, *nuevo;

    if(esVacia()){
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setNext(start);
        start = nuevo;

        return;
    }

    while(aux->getNext() != nullptr) //El bucle evita que aux se convierta en nulo
        aux = aux->getNext();

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setNext(nullptr);
    aux->setNext(nuevo);
}

/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void Lista<T>::remover(int pos) {
    Nodo<T> *aux = start, *auxDelete;
    int posActual = 0;

    while(posActual < pos-1 && aux != nullptr){  //pos-1 para posicionar aux en el Nodo anterior al que va a ser eliminado
        aux = aux->getNext();
        posActual++;
    }

    if(aux == nullptr)
        throw 404;

    if(pos == 0){
        start = start->getNext();
        delete aux;

        return;
    }

    if(aux->getNext() == nullptr)
        throw 404;

    auxDelete = aux->getNext();
    aux->setNext(auxDelete->getNext());

    delete auxDelete;
}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T Lista<T>::getDato(int pos) {
    Nodo<T> *aux = start;
    int posActual = 0;

    while(aux != nullptr && posActual < pos){
        aux = aux->getNext();
        posActual++;
    }

    if(aux == nullptr)
        throw 404;

    return aux->getDato();
}


/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template<class T>
void Lista<T>::reemplazar(int pos, T dato) {
    Nodo<T> *aux = start;
    int posActual = 0;

    while(posActual < pos && aux != nullptr){
        aux = aux->getNext();
        posActual++;
    }

    if(aux == nullptr)
        throw 404;

    aux->setDato(dato);
}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template<class T>
void Lista<T>::vaciar() {
    Nodo<T> *aux = start, *auxDelete;

    while(aux != nullptr){
       auxDelete = aux;
       aux = aux->getNext();
       delete [] auxDelete;
    }

    start = nullptr;
}

/**
 * Busca un dato en la lista y lo coloca al inicio
 * @param dato El dato que se quiere poner al principio
 */
template<class T>
void Lista<T>::alInicio(T dato) {
    Nodo<T> *aux = start,
            *aMover = nullptr;

    if (aux == nullptr)
        throw 404;

    if (aux->getDato() == dato)
        return;

    while (aux->getNext() != nullptr && aux->getNext()->getDato() != dato) {
        aux = aux->getNext();
    }

    if(aux->getNext() == nullptr)
        throw 404;

    aMover = aux->getNext();
    aux->setNext(aMover->getNext());
    aMover->setNext(start);
    start = aMover;
}

#endif //LISTA_H