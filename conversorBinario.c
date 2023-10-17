#include <stdio.h>

void binario (int b) {
  if(b == 0)
      printf("%d", b);
  
  if(b<2) 
    printf("%d", b);


  else {
    binario(b/2);
    printf ("%d", b % 2);
  }
}


int main () {
  int b;

  printf("Digite um número em base decimal: ");
  scanf("%d", &b);

  binario(b);

  return 0;
}