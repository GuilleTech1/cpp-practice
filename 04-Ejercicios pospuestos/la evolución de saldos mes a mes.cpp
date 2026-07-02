#include <stdio.h>
int main(void)
{
    float prestamo;
    float interes_anual;
    float pago;
    float tasa_mensual;

    printf("Introduce el importe del pr\202stamo: ");
    scanf("%f", &prestamo);

    printf("Introduce el tipo de inter\202s: ");
    scanf("%f", &interes_anual);

    printf("Introduce la cuota mensual: ");
    scanf("%f", &pago);

    tasa_mensual = (interes_anual / 100.0f) / 12.0f;

    prestamo = prestamo + (prestamo * tasa_mensual) - pago;
    printf("Saldo restante tras el primer pago: %.2f $\n", prestamo);

    prestamo = prestamo + (prestamo * tasa_mensual) - pago;
    printf("Saldo restante tras el segundo pago: %.2f $\n", prestamo);

    prestamo = prestamo + (prestamo * tasa_mensual) - pago;
    printf("Saldo restante tras el tercer pago: %.2f $\n", prestamo);

    return 0;
}
