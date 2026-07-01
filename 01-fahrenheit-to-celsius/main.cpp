/* Convierte una temperatura en grados Fahrenheit a grados Celsius */
#include <stdio.h>
#define PUNTO_CONGELACION 32.0f
#define FACTOR_ESCALA  (5.0f / 9.0f)
int main ()
{
    float fahrenheit, celsius;
    printf("Introduce la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - PUNTO_CONGELACION)* FACTOR_ESCALA;
    printf("Celsisus Equivale a: %f.1\n", celsius);
    return 0;

}

