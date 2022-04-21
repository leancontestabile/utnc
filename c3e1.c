#include <stdio.h>
#include <stdlib.h>

void numeroPantalla(int a);

int main(void){
    int numero;
    printf("Ingrese un numero entero ");
    scanf("%d", &numero);
    numeroPantalla(numero);
    return 0;
}
void numeroPantalla(int a){
    printf("%d", a);
}