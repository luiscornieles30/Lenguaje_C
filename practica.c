#include <stdio.h>
int main() { // Comentarios
    char texto[50];
    printf("Ingrese el siguente texto ");
    scanf("%49[^\n]", texto);
    printf("El texto ingresado es: %s", texto); 
    return 0;
}