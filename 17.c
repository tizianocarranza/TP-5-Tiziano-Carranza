#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, rest;

    //Ingresar el Numero natural 
    printf("Ingrese un numero naturarl: ");
    scanf("%i", &num);

    //Determinar si el numero es par o impar
    rest = num % 2;
    if(rest == 0)
    {
        printf ("\nEl numero ingresado (%i) es par", num);
    }
    else
    {
        printf ("\nEl numero ingresado (%i) es impar", num);
    }
    
    
return 0;

}