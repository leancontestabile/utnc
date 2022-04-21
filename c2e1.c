#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int n6;
    int n7;
    float prom;
     do
    {
        printf("Numero 1: ");
        scanf("%d", &n1);
    } while (n1>0);

    do
    {
        printf("Numero 2: ");
        scanf("%d", &n2);
    } while (n2>0);

    do
    {
        printf("Numero 3: ");
        scanf("%d", &n3);
    } while (n3>0);

    do
    {
        printf("Numero 4: ");
        scanf("%d", &n4);
    } while (n4>0);

    do
    {
        printf("Numero 5: ");
        scanf("%d", &n5);
    } while (n5>0);

    do
    {
        printf("Numero 6: ");
        scanf("%d", &n6);
    } while (n6>0);

    do
    {
        printf("Numero 7: ");
        scanf("%d", &n7);
    } while (n7>0);
    prom = (n1+n2+n3+n4+n5+n6+n7) / 7;
    printf("El promedio de los siete numeros es %.2f \n", prom);
    system("PAUSE");
    return 0;
}