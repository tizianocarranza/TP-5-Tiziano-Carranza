#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declarar las variables
    int num, digit, i, j, numdec, rest; 
    int vector[100];

    i = 0;
    j = 0;
    num = 0;
    rest = num % 2;


    //Ingresar un numero en sistema decimal y convertirlo a binario
    printf("Ingrese el numero en sistema decimal: ");
    scanf("%i", &num);

    numdec = num;


    while (num >= 1)
    {
        //if (rest >= 0 && rest <= 1)
        
        vector[i] = num % 2;

        num = num / 2; 
        

        i ++;
        j = i - 1;
           
    }

    
    //Presentar por pantalla el numero en binario y decimal
    printf("\nEl numero ingresado expresado en sistema binario es: ");

    
    while (j >= 0 && j < i)
    {
        printf("%i", vector[j]);

        j--;
    }
    
    printf("\nEl numero ingresado expresado en sistema decimal es: %i", numdec);


    return 0;    
}
