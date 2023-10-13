#include <stdio.h>

int main(void){

int num;
int res;
int opcion;
do
{
    printf("Seleccione una de las opciones\n");
    printf("Opcion 1. Suma de Gauss\n");
    printf("Opcion 2. Salir\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    printf("El numero tiene que ser un entero positivo\n");
    printf("Coloque un numero \n");
    scanf("%d", &num);
    
    if (num>0){
    res=num*(num+1)/2;
    printf("El resultado de la suma es: %d\n", res);
    }
    else if (num<=0)
    {
    printf("Numero erroneo\n");
        
    }
    
    

    break;
    
    case 2:
    printf("Elijio la opcion salir\n");
        
    }

} while (opcion !=2);


}





