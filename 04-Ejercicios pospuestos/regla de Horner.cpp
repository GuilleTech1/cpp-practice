/* Programa para evaluar un polinomio usando la Regla de Horner */
#include <stdio.h>

int main(void)
{
    float x;
    float resultado;

    // 1. Solicitar el valor de x al usuario
    printf("Introduce un valor para x: ");
    scanf("%f", &x);

    // 2. Calcular el valor del polinomio optimizado con la Regla de Horner

    resultado = ((((3.0f * x + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f) * x - 6.0f;

    // 3. Mostrar el resultado
    printf("El valor del polinomio  es: %.2f\n", resultado);

    return 0;
}
