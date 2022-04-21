/*
Realizar un programa que permita el ingreso de 10 números enteros
(positivos y negativos). Necesito generar un listado de los números positivos de
manera creciente y negativos de manera decreciente. (Como máximo 5 estructuras
repetitivas)
[Listado 1: 4, 5, 6, 10, 18, 29]
[Listado 2 : -1,-5,-9,-12]
*/
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define len 10

int main(void)
{
    int valor;
    int positivos[len];
    int negativos[len];
    inicializarArray(positivos, len);
    inicializarArray(negativos, len);
    for (int i = 0; i < len; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &valor);
        if (valor > 0)
        {
            positivos[i] = valor;
        } else
        {
            negativos[i] = valor;
        }
    }
    ordenamientoAscendente(positivos, len);
    ordenamientoDescendente(negativos, len);
    mostrarArray(positivos, len);
    printf("\n");
    mostrarArray(negativos, len);
    return 0;
}