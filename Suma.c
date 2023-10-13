#include <stdio.h>

int main(void){

int num;
int res;

printf("Coloque un numero entero positivo\n");
scanf("%d", &num);

res=num*(num+1)/2;

printf("El resultado de la suma es: %d\n", res);
}