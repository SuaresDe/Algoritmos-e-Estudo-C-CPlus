#include <stdio.h>
#include <stdlib.h> // pra usar o malloc

struct ponto
{
  float x;
  float y;
};

typedef struct ponto Ponto;

int main() {
  //Ponto a;
  //a.x = 1;
  //a.y = 5;
  
  Ponto *p = malloc(sizeof(Ponto)); // alocação dinamica
  p->x = 1;
  p->y = 5;
  printf("Ponto = (%f, %f)", p->x, p->y);
  
  return 0;
}