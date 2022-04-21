#include <stdio.h>
#include <stdlib.h>

int verificarPar(int a);

int main(void){
    int numero;
    int resultado;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    resultado = verificarPar(numero);
    if (resultado == 1)
    {
        printf("El numero ingresado es par");
    }else
    {
        printf("El numero ingresado es impar");
    }
    return 0;
}

int verificarPar(int a){
    int r;
    if (a%2==0)
    {
        r = 1;
    } else
    {
        r = 0;
    }
    return r;
}