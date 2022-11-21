#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, rest, nin, c;

    c = 1;
    nin = 0;
    rest = 1;

    //Ingresar numero a invertir
    printf("Ingrese el numero que quiere invertir: ");
    scanf("%i", &num);

    //Invertir el numero
    while (num >= 1) 
    {      
        if(num >= 10)
        {
        rest = num % 10;
        num = num / 10;
        nin = (nin + rest)*10;
        }

        else
        {
        rest = num % 10;
        num = num / 10;
        nin = (nin + rest);
        }
    
    }

    //Presentar por pantalla
    printf("\nEl numero invertido es: %i", nin);

    return 0;    
}

