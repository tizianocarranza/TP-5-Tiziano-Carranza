#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()

{

    //Declarar las variables
    int n, c, Num, Sum;
    float Prom; 

    //Ingresar N numeros, y acumularlos
    printf("Ingrese la cantidad de numeros que desea ingresar: ");
    scanf("%i", &n);
    printf("\n\n");

    c = 1;
    Sum = 0;
    Num= 0;


    while (c <= n)
    {
        printf("Ingrese su %iº numero: ",c);
        scanf("%i", &Num);

        Sum = Sum + Num;

        c = c + 1;
    }

    //Calcular el promedio y presentar por pantalla
    Prom = Sum/n;

    printf("\n EL PROMEDIO DE LOS NUMEROS INGRESADOS ES: %f", Prom);

    return 0;

    
}