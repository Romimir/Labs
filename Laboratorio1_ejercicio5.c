#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        numeros[i] = rand() % 100;
    }

    printf("Números en orden ascendente:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    printf("Números en orden descendente:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
