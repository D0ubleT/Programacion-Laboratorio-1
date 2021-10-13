/*
Ejercicio 2 de Secuenciales
Mazar, Vittorio T. T.

Dadas la base y altura de un rectángulo imprimir su superficie.
*/

#include <stdio.h>
int main() {
   int base;
   int altura;
   int area;

   printf("Ingrese la base del rectángulo:");
   scanf("%d", &base);
   printf("Ingrese la altura del rectángulo:");
   scanf("%d", &altura);
   
   area = base * altura;

   printf("La superficie del rectángulo es: %d", area);
}