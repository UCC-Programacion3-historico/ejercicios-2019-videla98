#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    if(size-1 == 0){
        return arr[0];
    }
    return arr[size-1] + sumatoria(arr, size-1);;
}