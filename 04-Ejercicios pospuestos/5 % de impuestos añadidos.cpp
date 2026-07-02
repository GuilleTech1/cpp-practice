#include <stdio.h>
int main(void)
{
    float cantidad_original;
    float cantidad_con_impuesto;

    // 1. Solicitar la cantidad al usuario
    printf("Introduce una cantidad: ");
    scanf("%f", &cantidad_original);

    // 2. Calcular el total sumando el 5% de impuestos
    cantidad_con_impuesto = cantidad_original * 1.05f;

    // 3. Mostrar el resultado final en pantalla con dos decimales
    printf("Con el impuesto: %.2f $\n", cantidad_con_impuesto);

    return 0;
}

