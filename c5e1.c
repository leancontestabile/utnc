#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num[5];
    int impares[5];
    int acum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &num[i]);
        acum += num[i];
        if (num[i] % 2 != 0)
        {
            
        }
        printf("La sumatoria es: %d", acum);
    }
    return 0;
}