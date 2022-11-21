#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int n1, n2, x, i, mult;
   

    i = 0;
    x = 0;
    mult = 0;
     
    //Ingresar n1, n2 y x
    printf("Ingrese su primer numero: ");
    scanf("%i", &n1);

    printf("Ingrese su segundo numero (debe ser mayor que el anterior): ");
    scanf("%i", &n2);

    while (n1 >= n2)
    {
        printf("ERROR: El numero debe ser mayor al primer numero ingresado, vuelva a intentarlo: ");
        scanf("%i", &n2);
    }
    
    
    printf("Ingrese un numero cualquiera: ");
    scanf("%i", &x);

    //Presentar por pantalla los multiplos de x comprendidos entre N1 y N2

    printf("Los multiplos de %i, comprendidos entre %i y %i son: \n", x, n1, n2);

    do
    {
        mult = x * i;

        if (mult > n1 ) 
        {
         printf("multiplo numero %i: %i\n", i, mult);
        }

        i = i + 1;
    } 

    while (mult < n2 - x);
    
return 0;

}
