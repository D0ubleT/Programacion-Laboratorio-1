/*
Ejercicio 6 de Secuenciales
Mazar, Vittorio T. T. 

Ingresar dos valores numéricos que corresponden a un horario expresados horas y 
minutos, convertirlo a minutos. Mostrar el resultado 
*/

#include <stdio.h>
int main() {
   int horas;
   int minutos;
   int enMinutos;

   printf("Ingrese las horas:");
   scanf("%d", &horas);
   printf("Ingrese los minutos:");
   scanf("%d", &minutos);
   
   enMinutos = (horas * 60) + minutos;

   printf("Son %d minutos", enMinutos);
}