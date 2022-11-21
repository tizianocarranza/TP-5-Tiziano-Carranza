#include <stdio.h>
#include <stdlib.h>

//Determinar cuanto paga el rico al prbre y visceversa y presentar por pantalla

int main()
{
    int pobre = 0, rico = 1, dias = 1;
    do
    {
        pobre = pobre + 100;
        rico = rico * 2;
        dias++;
        printf("Dia: %i\n pobre: $%i\n rico: $%i\n", dias, pobre, rico);
        if (dias == 10)
        {
            printf("EL RICO EMPIEZA A PAGAR MAS --> \n\n");
        }
    } while (dias < 30);

    system("pause");
    return 0;
}