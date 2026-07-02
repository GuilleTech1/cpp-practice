#include <stdio.h>

int main(void)
{
    int cantidad;
    int b20, b10, b5, b1;

    printf("Introduce una cantidad en d\242lares: ");
    scanf("%d", &cantidad);

    b20 = cantidad / 20;
    cantidad = cantidad % 20;

    b10 = cantidad / 10;
    cantidad = cantidad % 10;

    b5 = cantidad / 5;
    cantidad = cantidad % 5;

    b1 = cantidad;

    printf("\nBilletes de 20 $: %d\n", b20);
    printf("Billetes de 10 $: %d\n", b10);
    printf("Billetes de 5 d\242lares: %d\n", b5);
    printf("Billetes de 1 d\242lar: %d\n", b1);

    return 0;
}
