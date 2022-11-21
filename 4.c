#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{

    //Declarar las variables
    int n, c, Num, cPos, cNeg, cEro;

    //Ingresar N numeros, determinar si son positivos,negativos o iguales a 0 y contarlos
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);
    printf("\n\n");

    c = 1;
    cPos = 0;
    cNeg = 0;
    cEro = 0;
   


    while (c <= n)
    {
        printf("Ingrese su %iº numero: ",c);
        scanf("%i", &Num);

        if (Num >= 0)
        {
            if (Num > 0)
            {
               cPos = cPos + 1;
            }
            else
            {
                cEro = cEro + 1;
            }
        }

        else   
        {
            cNeg = cNeg + 1;
        } 

         c = c + 1;
    }

    //Presentar por pantalla
    
    printf("\nLa cantidad de numeros POSITIVOS ingresados es: %i\n", cPos);
    printf("\nLa cantidad de numeros NEGATIVOS ingresados es de: %i\n", cNeg);
    printf("\nLa cantidad de numeros iguales a CERO ingresados es: %i\n", cEro);
    
    return 0;

}