#include <stdio.h>

int main(void){

int num;
int res;
while (num<=0)
{
    printf("El numero tiene que ser un entero positivo\n");
    printf("Coloque un numero \n");
   scanf("%d", &num);
   if (num>0){
    res=num*(num+1)/2;
    printf("El resultado de la suma es: %d\n", res);
   }
}
}





