#include <stdio.h>

int main(void) {

  int a, b, c;
  
  printf("Insira o primeiro valor: ");
  scanf("%d", &a);

  printf("Insira o segundo valor: ");
  scanf("%d", &b);

  printf("Insira o terceiro valor: ");
  scanf("%d", &c);

  if (a < b && c) {
    printf("MENOR = %d", a);
  }
  else if (b < c) {
    printf("MENOR = %d", b); 
  }
  else {
    printf("MENOR = %d", c);
  }
  return 0;
}