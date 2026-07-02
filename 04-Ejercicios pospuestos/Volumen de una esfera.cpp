#include <stdio.h>
#define PI 3.14159f
int main () {
  float volumen,radio;
  printf("Ingresar radio de la esfera: ");
  scanf("%f", &radio);
  volumen = (4.0f / 3.0f) * PI * (radio,radio,radio);

  printf("El volumen de la esfera es: %.2f mestros cubicos\n", volumen);
  return 0;


}
