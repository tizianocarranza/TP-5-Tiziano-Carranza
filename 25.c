#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
//Declarar las variables
  int n, ed, al, i, sumed, sumal, ordened, ordenal, mayored, menoral;
  float promal, promed;

  i = 1;
  menoral = 0;
  mayored = 0;
  sumal = 0;
  sumed = 0;
  promal = 1.0;
  promed = 1.0;


//Ingresar los valores y determinar
  printf("Ingrese la cantidad de pares que desea ingresar: ");
  scanf("%i", &n);

  while (i <= n)
    {
      printf("Ingrese su %i par (edad en años, altura en cm): ", i);
      scanf("%i, %i", &ed, &al);

      if(i == 1)
      {
        mayored = ed;
        menoral = al;
      }
      else
      {
        if(ed > mayored)
        {
          mayored = ed;
          ordened = i;
        }
        if(al < menoral)
        {
          menoral = al;
          ordenal = i;
        }        
      }
    sumed = sumed + ed;
    sumal = sumal + al; 
    i++;  
    }

  promal = sumal/n;
  promed = sumed/n;


//Presentar por pantalla
printf("\nla mayor edad ingresada es: %i, y se ingreso en el orden: %i\n", mayored, ordened);
printf("la menor altura ingresada es: %i, y se ingreso en el orden: %i\n", menoral, ordenal);
printf("El promedio de las edades ingresadas es: %f\n", promed);
printf("El promedio de las alturas ingresadas es: %f\n", promal);

  
  return 0;
}