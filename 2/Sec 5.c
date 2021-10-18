/*
Ejercicio 5 de Secuenciales
Mazar, Vittorio T. T.

Ingresar tres números, informar su promedio.
*/

#include <stdio.h>
int main() {
   int primero;
   int segundo;
   int tercero;
   float promedio;

   printf("Ingrese el primer numero:");
   scanf("%d", &primero);
   printf("Ingrese el segundo numero:");
   scanf("%d", &segundo);
   printf("Ingrese el tercer numero:");
   scanf("%d", &tercero);
   
   promedio = (primero + segundo + tercero) / 3;

   printf("El promedio de los tres numeros es: %f", promedio);
}