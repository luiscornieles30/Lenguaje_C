#include <stdio.h>
#include <conio.h>
int main() { // Comentarios
    char texto[50];
    int luisito;
    printf("Ingrese un numero: ");
    scanf("%d", &luisito);
    printf("Ingrese el siguente texto ");
    scanf(" %49[^\n]", texto);
    if (luisito > 300) {
        printf("Eres Positivamente postivo)");
        } 
    getchar();
    return 0;
}