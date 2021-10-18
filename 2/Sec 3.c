/*
Ejercicio 3 de Secuenciales
Mazar, Vittorio T. T.

Dado el radio de una circunferencia informar su perímetro y superficie. 
*/

#include <stdio.h>
#define pi 3.14

int main() {
   int radio;
   float perimetro;
   float area;

   printf("Ingrese el radio de la circunferencia:");
   scanf("%d", &radio);
   
   perimetro = 2 * pi * radio;

   area = pi * (radio * radio);

   printf("El perimetro de la circunferencia es: %f \n", perimetro);
   printf("La superficie de la circunferencia es: %f", area);
}