#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int y, x, cy, n, c;

    c = 1;
    x = 1;
    y = (2/3) * x - 2;

    //Ingresae N puntos 
    printf("Ingrese la cantidad de puntos en el plano que desee ingresar: ");
    scanf("%i", &n);

    while (c <= n)
    {
        printf("\n\nIngrese el %iº punto (x, y): ");
        scanf("%i, %i", &x, &cy);

        if(y > cy)
        {
            printf("El siguiente punto se encuentra por debajo de la recta y = 2/3 x - 2: (%i, %i)", x, cy);
        }
        else
        {
           if(y == cy) 
           printf("El siguiente punto pertenece a la recta y = 2/3 x - 2: (%i, %i)", x, cy);

           else
           {
            printf("El siguiente punto se encuentra por encima de la recta y = 2/3 x - 2: (%i, %i)", x, cy);
           }
        }

         c = c + 1;
    }

    return 0;

}