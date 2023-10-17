#include <stdio.h>
#include <math.h>

int main(void) {

  double a, b, c, x1, x2, delta;
  
  printf("Digite o coeficiente A: ");
  scanf("%lf", &a);

  printf("Digite o coeficiente B: ");
  scanf("%lf", &b);

  printf("Digite o coeficiente C: ");
  scanf("%lf", &c);

  delta = b * b - 4 * a * c;

  if(a == 0 || delta < 0) {
    printf("Equação não possue raizes!");
  }
  else {

  x1 = (-b + sqrt(delta))/ (2 * a);

  x2 = (-b - sqrt(delta))/ (2 * a);
  

  printf("X1 = %4lf\n", x1);

  printf("X2 = %4lf\n", x2);

  }
  return 0;
}