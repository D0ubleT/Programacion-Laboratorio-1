#include<stdio.h>

void prueba();
int main() {
    printf("Antes de entrar en prueba\n");
    prueba ();
    printf("Después de entrar en prueba\n");
    return 0;
}
void prueba() {
    printf("Mis primeros pasos \n");
}