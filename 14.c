#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Declarar variables
    long int bin1, bin2;
    int I = 0, recordador = 0, sum[20];


    //Ingresar dos numeros binarios, sumarlos y presentar por pantalla
    printf("Ingresa el primer numero binario: ");
    scanf("%ld", &bin1);
    printf("Ingresa el segundo numero binario: ");
    scanf("%ld", &bin2);

    while (bin1 != 0 || bin2 != 0)
    {
        sum[I++] = (bin1 % 10 + bin2 % 10 + recordador) % 2;
        recordador = (bin1 % 10 + bin2 % 10 + recordador) / 2;
        bin1 = bin1 / 10;
        bin2 = bin2 / 10;
    }

    if (recordador != 0)
        sum[I++] = recordador;

    --I;
    printf("\nLa suma de los dos numeros binarios ingresados es: ");
    while (I >= 0)
    {
        printf("%d", sum[I--]);
    }
   
   


return 0;
}