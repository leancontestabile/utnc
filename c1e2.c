#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int max;
    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);
    printf("Numero 3: ");
    scanf("%d", &n3);
    if (n1>n2 && n1>n3)
    {
        max = n1;
    } else if (n2>n3)
    {
        max = n2;
    } else
    {
        max = n3;
    }
    printf("El numero mas grande es %d \n", max);
    system("PAUSE");
    return 0;
}