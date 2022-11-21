#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, n, i, cs;

    cs = 1;
    i = 1; 
    

    //Ingresar el N numeros naturales 
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);

    int vector[n];

    while(i <= n)
    {   
        printf("Ingrese el %i numero: ", i);
        scanf("%i", &num);
        vector[i] = num;

        if (i > 1)
        {
            if (num <= vector[i-1] )

            {
                cs = cs + 1;
            }   
        }    
        i = i + 1; 
    }

    //Presentar por pantalla la cantidad de series ascendentes
    printf("La cantidad de series ascendentes es: %i", cs);
    
    
return 0;

}