#include <stdio.h>

int *p;
int a = 5;

int main() {
  p = &a;
  printf("O valor apontado pelo ponteiro é: %d", *p);
  return 0;
}