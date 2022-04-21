#include <stdio.h>
#include <stdlib.h>

float ingresoFlotante(void);

int main(void){
    float flotante;
    flotante = ingresoFlotante();
    printf("%.2f", flotante);
    return 0;
}
float ingresoFlotante(void){
    float a;
    printf("Ingrese un numero flotante: ");
    scanf("%f", &a);
    return a;
}