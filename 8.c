#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int y, cx, cy, n, c;

    c = 1;

    //Ingresae N puntos 
    printf("Ingrese la cantidad de puntos en el plano que desee ingresar: ");
    scanf("%i", &n);

    while (c <= n)
    {
        printf("\n\nIngrese el %iº punto (x, y): ");
        scanf("%i, %i", &cx, &cy);
        if (cx >= 1)
        {
            if (cy >= 1)
            {
                printf("El punto %i, %i se encuntra en el segundo cuadrante", cx, cy);
            }
            else
            {
                if (cy == 0 )
                {
                   printf("El punto %i, %i se encuntra sobre el eje x", cx, cy); 
                }
                else
                {
                    printf("El punto %i, %i se encuntra en el cuarto cuadrante", cx, cy);
                }               
            }          
        }
        else
        {
            if (cx == 0)
            {
                if (cy == 0)
                {
                    printf("El punto %i, %i se encuntra en el origen de coordenadas", cx, cy);
                }
                else
                {
                    printf("El punto %i, %i se encuntra sobre el eje y", cx, cy);
                }                
            }
            else
            {
                if (cy >= 1)
                {
                    printf("El punto %i, %i se encuentra en el primer cuadrante", cx, cy);

                }
                else
                {
                    if(cy == 0)
                    {
                         printf("El punto %i, %i se encuntra sobre el eje x", cx, cy);
                    }
                    else
                    {
                        printf("El punto %i, %i se encuentra en el tercer cuadrante", cx, cy);
                    }
                }
            }
        
        }

         c = c + 1;
    }

    return 0;

}
