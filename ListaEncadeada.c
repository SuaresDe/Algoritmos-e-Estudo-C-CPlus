#include <stdio.h>
#include <stdlib.h>

 struct ponto
{
float x;
float y;
struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;


//adicionar elementos
void add(float x, float y)
{
  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = x;
  p -> y = y;
  p ->prox = listaPontos;
  listaPontos = p;
}


//exibe elementos
void exibe(Ponto *p)
{
  if(p!=NULL){
    printf("Ponto(%.1f,%.1f)",p->x,p->y);
    exibe(p->prox);
  }
  
  /*Ponto *auxLista = listaPontos;
  while(auxLista != NULL) 
  {
    printf("\nPonto(%.1f, %.1f)", auxLista->x, auxLista->y);
    auxLista = auxLista->prox;
  }  */
}

int a;

int main() {
  
  a = 1; 
  
  while (a != 0) {
    printf("Se deseja adicionar elementos na lista digite ´1´, senão digite ´0´: ");
    scanf("%d", &a);
    
    if (a == 1) {
      float x, y;
      printf("Digite os valores de X e Y: \n");
      scanf("%f %f", &x, &y);
      add(x, y);
    }
  }
  
  //printf("%.0f %.0f", listaPontos->x, listaPontos->y);
  
  exibe(auxLista);
  printf("\nFim!");
  return 0;
} 


/* Criação de elementos não automatizada.

  Ponto *p = (Ponto*) malloc(sizeof(Ponto));
  p -> x = 1;
  p -> y = 5;

  Ponto *p1 = (Ponto*) malloc(sizeof(Ponto));
  p -> x = 3;
  p -> y = 9;

  Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));
  p -> x = 4;
  p -> y = 7;

  p -> prox = p1;
  p1 -> prox = p2;
  p2 -> prox = NULL;*/