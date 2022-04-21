#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define len 2

int main(void)
{
    int array[len] = {4,2};
    int aux;
    ordenamientoAscendente(array, len);
    mostrarArray(array, len);
    return 0;
}