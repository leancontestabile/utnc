#include <stdio.h>
int main(){
    int n1 = 1;
    int n2 = 0;
    int suma;
    do
    {
        printf("Numero 1: ");
        scanf("%d", &n1);
    } while (n1<-50 || n1>100);
    
    do
    {
        printf("Numero 2: ");
        scanf("%d", &n2);
    } while (n2<-50 || n2>100);

    suma = n1 + n2;
    printf("Suma = %d \n", suma);
    system("PAUSE");
    return 0;
}