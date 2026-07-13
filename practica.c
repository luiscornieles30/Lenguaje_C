#include <stdio.h>
#include <conio.h>
int main() { // Comentarios
    char texto[50];
    int luisito;
    printf("Ingrese un numero: ");
    scanf("%d", &luisito);
    printf("Ingrese el siguente texto ");
    scanf(" %49[^\n]", texto);
    printf("El texto ingresado es: %s y el numero ingresado es %d", texto, luisito);
    getch();
    return 0;
}