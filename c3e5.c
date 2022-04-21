#include <stdio.h>
#include <stdlib.h>

int restar1(int a, int b);
int restar2(void);
void restar3(int a, int b);
void restar4(void);

int main(void)
{
    return 0;
}

int restar1(int a, int b){
    int r;
    r = a - b;
    return r;
}
int restar2(void){
    int a;
    int b;
    int r;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    r = a - b;
    return r;
}
void restar3(int a, int b){
    int r;
    r = a - b;
    printf("El resultado de la resta es: %d", r);
}
void restar4(void){
    int a;
    int b;
    int r;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    r = a - b;
    printf("El resultado de la resta es: %d", r);
}