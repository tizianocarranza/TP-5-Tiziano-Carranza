#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int y, cx, cy, n, c, punt;

    c = 1;
    punt = 0;

    //Ingresae N tiros y determinar el puntaje
    printf("Ingrese la cantidad de tiros que desee ingresar: ");
    scanf("%i", &n);

    while (c <= n)
    {
        printf("\n\nIngrese el %iº tiro (x, y): ");
        scanf("%i, %i", &cx, &cy);

        if(cy <= 1 && cx <= 1 && cy >= -1 && cx >= -1)
        {
            punt = punt + 3;
        }
        else
        {
            if (cy <= 2 && cx <= 2 && cy >= -2 && cx >= -2)
            {
                punt = punt + 2;
            }
            else if (cy <= 3 && cx <= 3 && cy >= -3 && cx >= -3)
            {
                punt = punt + 1;
            }                       
        }  
    c = c + 1;
    }

    //Presentar por pantalla el puntaje total obtenido
    printf("El puntaje total obtenido con %i Tiros es de: %i", n, punt);
        
    return 0;

}
