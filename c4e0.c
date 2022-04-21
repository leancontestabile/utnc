#include <stdlib.h>
#include <stdio.h>

 int CalcularMaximo(int* maximo, int* minimo);

 int main(void)
 {
    int maximo;
    int minimo;
    CalcularMaximo(&maximo, &minimo);
    printf("El maximo es, %d\n"
    "El minimo es, %d", maximo, minimo);
    return 0;
 }

int CalcularMaximo(int* maximo, int* minimo){
    int n1;
    int n2;
    // -1 es error | 1 es god
    int retorno = -1;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    if (maximo != NULL && minimo != NULL)
    {
        if (n1 > n2)
    {
        *maximo = n1;
        *minimo = n2;
    } else
    {
        *maximo = n2;
        *minimo = n1;
    }
    }else
    {
        retorno = 1;
    }
    return retorno;
}