#include <stdio.h>
#include <math.h>

int main()

{
//Declarar las variables
int punt, i, pt, rest;
pt = 0;
rest = 1;
i = 1; 

//Ingresar y sumar los tiros hasta que uno sea par
while (rest != 0)
{
printf("Ingrese el valor del %i tiro: ", i);
scanf("%i", &punt);

rest = punt % 2;
  
if (rest != 0)
   {
   pt = pt + punt;
   i = i + 1;
   }
  
}



//Presentar por pantalla
printf("El puntaje obtenido es de: %i, y se realizaron %i tiros", pt, i);
  
return 0;
}