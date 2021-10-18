/*
Ejercicio 4 de Secuenciales
Mazar, Vittorio T. T.

Ingresar tres números, informar su suma y producto.
*/

#include <stdio.h>
int main() {
   int primero;
   int segundo;
   int tercero;
   int suma;
   int producto;

   printf("Ingrese el primer numero:");
   scanf("%d", &primero);
   printf("Ingrese el segundo numero:");
   scanf("%d", &segundo);
   printf("Ingrese el tercer numero:");
   scanf("%d", &tercero);
   
   suma = primero + segundo + tercero;
   producto = primero * segundo * tercero;

   printf("La suma de los numeros es: %d \n", suma);
   printf("El producto de los numeros es: %d", producto);
}