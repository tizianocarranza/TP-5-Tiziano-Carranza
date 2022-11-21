#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, i, div, rest;
   
    i = 1;
    num = 0;
    div = 0;
    rest = 0;
     
    //Ingresar Numero de 4 digitos
    printf("Ingrese un numero de 4 (cuatro) digitos: ");
    scanf("%i", &num);
    
    while ((num < 999) || (num > 10000))
    {
        printf("El numero debe ser de 4 dgitos, por favor vuelva a intentarlo: ");
        scanf("%i", &num);   
    }

    //Determinar Divisores y presentar por pantalla

    do
    {
     rest = num % i;
     div = num / i;

     if (rest == 0)
     {
        printf("DIVISOR: %i\n", div);
     }

     i = i + 1;
     
    }
    while(i <= num/2);
    
    
    
return 0;

}
 