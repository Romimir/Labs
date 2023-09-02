#include <stdio.h>

int esPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    if (numero <= 3) {
        return 1;
    }
    if (numero % 2 == 0 || numero % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= numero; i += 6) {
        if (numero % i == 0 || numero % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

void calcularEstadisticas(int arreglo[], int longitud) {
    if (longitud <= 0) {
        printf("No se pueden calcular estadísticas para un arreglo vacío.\n");
        return;
    }

    int suma = 0;
    int maximo = arreglo[0];
    int minimo = arreglo[0];

    for (int i = 0; i < longitud; i++) {
        suma += arreglo[i];

        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }

        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }

    double promedio = (double)suma / longitud;

    printf("Promedio: %.2lf\n", promedio);
    printf("Valor máximo: %d\n", maximo);
    printf("Valor mínimo: %d\n", minimo);
}

int buscarNumero(int arreglo[], int longitud, int valor) {
    for (int i = 0; i < longitud; i++) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1;
}

int eliminarDuplicados(int arreglo[], int longitud) {
    if (longitud <= 1) {
        return longitud;
    }

    int nuevoTamanio = 1;

    for (int i = 1; i < longitud; i++) {
        int esDuplicado = 0;

        for (int j = 0; j < nuevoTamanio; j++) {
            if (arreglo[i] == arreglo[j]) {
                esDuplicado = 1;
                break;
            }
        }

        if (!esDuplicado) {
            arreglo[nuevoTamanio] = arreglo[i];
            nuevoTamanio++;
        }
    }

    return nuevoTamanio;
}

int main() {
    int numero1 = 7;
    int numero2 = 12;
    int arreglo[] = {12, 5, 7, 19, 3, 8};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    if (esPar(numero1)) {
        printf("%d es un número par.\n", numero1);
    } else {
        printf("%d es un número impar.\n", numero1);
    }

    if (esPar(numero2)) {
        printf("%d es un número par.\n", numero2);
    } else {
        printf("%d es un número impar.\n", numero2);
    }

    if (esPrimo(numero1)) {
        printf("%d es un número primo.\n", numero1);
    } else {
        printf("%d no es un número primo.\n", numero1);
    }

    if (esPrimo(numero2)) {
        printf("%d es un número primo.\n", numero2);
    } else {
        printf("%d no es un número primo.\n", numero2);
    }

    calcularEstadisticas(arreglo, longitud);

    int indice1 = buscarNumero(arreglo, longitud, numero1);
    int indice2 = buscarNumero(arreglo, longitud, numero2);

    if (indice1 != -1) {
        printf("%d se encuentra en el índice %d\n", numero1, indice1);
    } else {
        printf("%d no se encontró en el arreglo.\n", numero1);
    }

    if (indice2 != -1) {
        printf("%d se encuentra en el índice %d\n", numero2, indice2);
    } else {
        printf("%d no se encontró en el arreglo.\n", numero2);
    }

    int arreglo2[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int longitud2 = sizeof(arreglo2) / sizeof(arreglo2[0]);

    printf("Arreglo original:\n");
    for (int i = 0; i < longitud2; i++) {
        printf("%d ", arreglo2[i]);
    }
    printf("\n");

    int nuevoTamanio = eliminarDuplicados(arreglo2, longitud2);

    printf("Arreglo sin duplicados:\n");
    for (int i = 0; i < nuevoTamanio; i++) {
        printf("%d ", arreglo2[i]);
    }
    printf("\n");

    printf("Nuevo tamaño del arreglo: %d\n", nuevoTamanio);
    return 0;
}
