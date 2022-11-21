#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, digit, i, numdec, numbin; 
    int vector[] = {1, 2, 4, 8, 16, 32, 64, 128, 256};

    i = 0;
    numdec = 0;

    //Ingresar un numero en sistema binario
    printf("Ingrese el numero en sistema binario: ");
    scanf("%i", &num);

    numbin = num;

    while (num > 0)
    {
        digit = num % 10;

        if(digit == 1)
        {
            numdec = numdec + vector [i];
        }

        i ++;
        num = num/10;

    }

    

   

    //Presentar por pantalla el numero en decimal y binario
    printf("\nEl numero ingresado expresado en sistema decimal es: %i\nEl numero ingresado expresado en sistema binario es: %i", numdec, numbin);


    return 0;    
}

