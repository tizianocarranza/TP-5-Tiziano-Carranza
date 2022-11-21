#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, fact;

    fact = 1; 
    

    
    //Ingresar el numero
    printf("Ingrese su numero: ");
    scanf("%i", &num);

    int i = 1, j = num;

    int vector[100];

    //Determinar el factorial
    while (i <= num)
    {
        fact = fact * i;
        vector[i] = i;
        i++;
    }

    //Presentar por pantalla el valor del factorial y su desarrollo
    printf("El valor del factorial es: %i \n\n", fact);
    
    while (j > 1)
    {
        if(j == num)
        {
            printf("%i! = ", num);
        }
        printf("%i * ", vector[j]);
        j--;
    }
    
    printf("%i", vector[j]);
    

    
return 0;

}
