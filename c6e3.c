#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define len 3

int main(void)
{
    int edad[len];
    int salario[len];
    int sexo[len];
    int acum = 0;
    int noBinarios[len];
    float promedio;
    inicializarArray(edad, len);
    inicializarArray(salario, len);
    inicializarArray(sexo, len);
    inicializarArray(noBinarios, len);
    for (int i = 0; i < len; i++)
    {
        printf("Ingrese su edad: ");
        scanf("%d", &edad[i]);
        printf("Ingrese su salario: ");
        scanf("%d", &salario[i]);
        printf("Ingrese su sexo: ");
        scanf("%d", &sexo[i]);
        acum += salario[i];
        if (sexo[i] == 3)
        {
            noBinarios[i] = 1;
        }
    }
    promedio = acum/len;
    printf("El promedio de sueldo es: %.2f\n", promedio);
    for (int i = 0; i < len; i++)
    {
        if (noBinarios[i] == 1)
        {
            printf("El empleado legajo %d, es no binario\n", i);
        }
    }
    return 0;
}