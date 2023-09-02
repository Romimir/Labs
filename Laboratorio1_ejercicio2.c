#include <stdio.h>

int main() {
    double num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%lf", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    double suma = num1 + num2;
    double resta = num1 - num2;
    double multiplicacion = num1 * num2;
    double division = num1 / num2;

    printf("Resultados de las operaciones:\n");
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, suma);
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resta);
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiplicacion);
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, division);

    return 0;
}