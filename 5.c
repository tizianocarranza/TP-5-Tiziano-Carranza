#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{

    //Declarar las variables
    int n, c, num, max, min;

    c = 1; 

    //Ingresar n valores numeriocos, determinjar el mayor y el menor
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);

    while (c <= n)
    {
        printf("\nIngrese el %iª Numero: ", c);
        scanf("%i", &num);
    
         if (c == 1)
        {
            max = num;
            min = num;
        }

        else
        {
           if (num < min)
            {
                min = num; 
            }

            else
            {
                if(num > max)
                {
                    max = num;
                }
            }
        }

        c = c + 1;
    }
    
    


    //Presentar por pantalla
    printf("\nEl mayor numero Ingresado es: %i", max);
    printf("\nEl menor numero Ingresado es: %i", min);
   
    return 0;
}