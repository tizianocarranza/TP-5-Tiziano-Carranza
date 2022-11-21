#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int n1, n2, sum;

    sum = 0; 
    

    
    //Ingresar n1, n2
    printf("Ingrese su primer numero: ");
    scanf("%i", &n1);

    printf("Ingrese su segundo numero (debe ser mayor que el anterior): ");
    scanf("%i", &n2);

    while (n1 >= n2)
    {
        printf("ERROR: El numero debe ser mayor al primer numero ingresado, vuelva a intentarlo: ");
        scanf("%i", &n2);
    }

    int i = n1 + 1, j = i;

    int vector[1010];

    //Sumar los numeros enteros comprendidos entre 1 y 2 y guardar la operacion
    while (i < n2)
    {
        sum = sum + i;
        vector[i] = i;
        i++;
    }

    //Presentar por pantalla el resultado y la operacion 
    printf("El resultado de la suma es: %i \n\n", sum);
    
    while (j < n2 - 1)
    {
        printf("%i + ", vector[j]);
        j++;
    }

    printf("%i", vector[j]);
    
    
    printf(" = %i", sum);

    
return 0;

}
