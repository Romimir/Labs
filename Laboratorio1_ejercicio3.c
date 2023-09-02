#include <stdio.h>

int main() {
    char nombre[50];
    int edad;

    printf("Por favor, ingrese su nombre: ");
    scanf("%s", nombre);

    printf("Por favor, ingrese su edad: ");
    scanf("%d", &edad);

    printf("Hola %s, usted tiene %d años de edad.\n", nombre, edad);

    return 0;
}
