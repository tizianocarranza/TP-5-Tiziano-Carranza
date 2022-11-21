#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int l, n, i, sum, sumf;
    int vect[100];

    sum = 0;
    n = 1;
    i = 1; 
    

    
    //Ingresar L
    printf("Ingrese su numero L: ");
    scanf("%i", &l);

    //Determinar el valor N y presentar por pantalla
    while (sum < l)
    {
        i ++;
        sum = sum + i;      
    }

    
    if (sum <= l)
    {
        n = i;
        printf("El valor N = %i", n);
    }
    else
    {
        n = i - 1;
        printf("El valor N = %i", n);
    }

    
return 0;

}