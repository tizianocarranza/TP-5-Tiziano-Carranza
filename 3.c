#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{

    //Declarar las variables
    int n, c, Num, SumP, SumImp, ContP, ContImp, rest;
    float PromP, PromImp; 

    //Ingresar N numeros, determinar si son pares o Impares, y acumularlos
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);
    printf("\n\n");

    c = 1;
    SumP = 0;
    SumImp = 0;
    ContImp =0;
    ContP = 0;
    PromP = 1.0;
    PromImp = 1.0;
    rest = 1;


    while (c <= n)
    {
        printf("Ingrese su %iº numero: ",c);
        scanf("%i", &Num);

        while (Num == 0)
        {
            printf("Introduce un numero distinto de 0:\n");
            scanf("%i", &Num);
        } 
        
         
            rest = Num % 2;


            if (rest == 0)

            {
                SumP = SumP + Num;
                ContP = ContP + 1;
            }

            else
            {
                SumImp = SumImp + Num;
                ContImp = ContImp + 1;
            }      

      c = c + 1;
    }

    //Calcular el promedio y presentar por pantalla
    PromP = SumP / ContP;
    PromImp = SumImp / ContImp;

    printf("\nEl promedio de los numeros PARES ingresados es: %f\n", PromP);
    printf("\nEl promedio de los numeros IMPARES ingresados es de: %f", PromImp);

    return 0;

}