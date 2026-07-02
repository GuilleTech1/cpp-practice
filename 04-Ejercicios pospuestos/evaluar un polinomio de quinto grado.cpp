/* Programa para evaluar un polinomio de quinto grado */
#include <stdio.h>

int main(void)
{
    float x;
    float resultado;

    // 1. Solicitar el valor de x al usuario
    printf("Introduce un valor para x: ");
    scanf("%f", &x);

    // 2. Calcular el valor del polinomio término a término
    resultado = (3.0f * x * x * x * x * x)
              + (2.0f * x * x * x * x)
              - (5.0f * x * x * x)
              - (x * x)
              + (7.0f * x)
              - 6.0f;

    // 3. Mostrar el resultado en pantalla
    printf("El valor del polinomio es: %.2f\n", resultado);

    return 0;
}
