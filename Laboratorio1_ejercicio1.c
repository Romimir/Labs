#include <stdio.h>

int main() {
    int entero = 42;
    short corto = 10;
    long largo = 1234567890;
    float flotante = 3.14159;
    double doble = 3.14159265359;
    char caracter = 'A';
    _Bool booleano = 1;

    printf("Entero: %d\n", entero);
    printf("Corto: %d\n", corto);
    printf("Largo: %ld\n", largo);

    printf("Flotante: %f\n", flotante);
    printf("Doble: %lf\n", doble);

    printf("Caracter: %c\n", caracter);

    if (booleano) {
        printf("Booleano: Verdadero\n");
    } else {
        printf("Booleano: Falso\n");
    }

    return 0;
}
