#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    // Declarar variables 
    int N, i = 1, contador_de_puntos = 0, promedio = 0;
    float x;
    printf("Ingresar la cantidad de tiros que se van a hacer: ");
    scanf("%i", &N);

    //Determinar los puntos y presentar por pantalla
    do
    {
        printf("Ingresar las coordenadas, X: ");
        scanf("%f", &x);
        if ((x >= 0) && (x <= 1))
        {
            printf("4 Puntos!\n");
            contador_de_puntos = contador_de_puntos + 4;
        }
        else
        {
            if (x > 1 && x <= 2)
            {
                printf("3 Puntos!\n");
                contador_de_puntos = contador_de_puntos + 3;
            }
            else
            {
                if (x > 2 && x <= 3)
                {
                    printf("2 Puntos!\n");
                    contador_de_puntos = contador_de_puntos + 2;
                }
                else
                {
                    if (x > 3 && x <= 4)
                    {
                        printf("1 Puntos!\n");
                        contador_de_puntos = contador_de_puntos + 1;
                    }
                    else
                    {
                        printf("0 puntos!\n");
                        contador_de_puntos = contador_de_puntos + 0;
                    }
                }
            }
        }

        i++;
    } while (i <= N);

    promedio = contador_de_puntos / N;
    printf("Puntaje total fue de: %i\n", contador_de_puntos);
    printf("Promedio de: %i\n", promedio);

    system("pause");
    return 0;
}
