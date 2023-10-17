#include <stdio.h>
#include <stdlib.h>

struct nodo
{
  int valor;
  struct nodo *esquerda;
  struct nodo *direita;
};

typedef struct nodo Nodo;

Nodo* create(int valor)
{
  Nodo *n = malloc(sizeof(Nodo));
  n->valor = valor;
  n->esquerda = NULL;
  n->direita = NULL;
  return n;
}

void imprimir(Nodo *n)
{
  if(n==NULL)
     return;
 imprimir(n->esquerda); 
  printf("\n%d", n->valor);
  //imprimir(n->esquerda);
  imprimir(n->direita);
}

void add(Nodo *n, int valor)
{
  if(valor < n->valor)
  {
    if(n->esquerda == NULL)
      n->esquerda = create(valor);
    else
        add(n->esquerda, valor);
  }
  else
  {
    if(n->direita == NULL)
      n->direita = create(valor);
    else
      add(n->direita, valor);
  }
}

void rem(Nodo *n, int valor)
{
  Nodo *filho = n;
  Nodo *pai = NULL; // Inicialize pai como NULL
  do{
    pai = filho; // Atualize pai dentro do loop antes de avançar para o próximo filho
    if(valor < filho->valor)
      filho = filho->esquerda;
    else if(valor > filho->valor)
      filho = filho->direita;
  } while(filho != NULL && filho->valor != valor);

  if(filho != NULL)
  {
    if(filho->esquerda == NULL && filho->direita == NULL){ //CASO NODO NÃO POSSUIR FILHOS
        if(pai->esquerda == filho) pai->esquerda = NULL;
        if(pai->direita == filho) pai->direita = NULL;
    }

    if(filho->esquerda != NULL && filho->direita == NULL) { //CASO NODO FILHO TEM UM FILHO A ESQUERDA
      if(pai->esquerda == filho) pai->esquerda = filho->esquerda;
      if(pai->direita == filho) pai->direita = filho->esquerda;
    }
    if(filho->direita != NULL && filho->esquerda == NULL) { //CASO NODO FILHO TEM UM FILHO A DIREITA
      if(pai->esquerda == filho) pai->esquerda = filho->direita;
      if(pai->direita == filho) pai->direita = filho->direita; 
    }

    if(filho->esquerda != NULL && filho->direita != NULL){ //CASO NODO FILHO TEM DOIS FILHOS
        if(filho->esquerda->direita == NULL){
            filho->valor = filho->esquerda->valor;
        }else{
            Nodo *p = filho->esquerda;
            Nodo *aux = p;
            while(p->direita != NULL){
                aux = p;
                p = p->direita;
            }
            aux->direita = NULL;
            filho->valor = p->valor;
        }
    }
    
    }
  
}

int main(void) {
    Nodo *root = create(5);

    add(root, 2);
    add(root, 1);
    add(root, 8);
    add(root, 4);
    add(root, 7);
    add(root, 3);
    add(root, 6);
    add(root, 9);
    add(root, 10);
    add(root, 11);

    imprimir(root);

    return 0;
}