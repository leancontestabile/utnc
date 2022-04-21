#include <stdalign.h>
#include <stdio.h>

int funcion(int* sumaPositivos, int* productoNegativos);

int main(void)
{
    int pregunta = 1;
    int positivos = 0;
    int negativos = 1;
    do
    {
        funcion(&positivos, &negativos);
        printf("Ingrese 1 si quiere ingresar otro numero: ");
        scanf("%d", &pregunta);
    } while (pregunta == 1);
    printf("La suma de los positivos es %d\n"
    "El producto de los negativos es %d", positivos, negativos);
    return 0;
}

int funcion(int* sumaPositivos, int* productoNegativos){
    int numero;
    if (sumaPositivos != NULL && productoNegativos != NULL);
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if (numero > 0)
        {
            *sumaPositivos = *sumaPositivos + numero;
        }
        else
        {
            *productoNegativos = *productoNegativos * numero;
        }
    }
 }
