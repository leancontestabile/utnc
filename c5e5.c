#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[10];
    int posicion;
    int acum = 0;
    int valor;
    for (int i = 0; i < 10; i++)
    {
        num[i] = 0;
    }

    for (int j = 0; j < 10; j++)
    {
        do
        {
            printf("Ingresar un numero entre -50 y 75 y distinto de 0: ");
            scanf("%d", &valor);
            printf("Ingresar la posicion: ");
            scanf("%d", &posicion);
            num[j] = valor;
        } while (valor == 0 || valor<-50 || valor>75 );
        if (num[j]>0)
        {
            acum += num[j];
        }
        else
        {
            
        }
    }
    printf("La suma de los numeros positivos es: %d", acum);
    return 0;
}