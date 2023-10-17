#include <stdio.h>

int main(void) {

  int idadeA;
  char nomeA[50];
  int idadeB;
  char nomeB[50];
  double media; 

  
  
  printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets (nomeA);
    printf ("Idade: ");
    scanf ("%d", &idadeA);

  printf("Dados da segunda pessoa:\n");
  printf("Nome: ");
  fseek(stdin, 0, SEEK_END);
  gets(nomeB);
  printf("Idade: ");
  scanf ("%d", &idadeB);

  media = (idadeA + idadeB) / 2;

  printf("A idade media de %s e %s é %.1lf anos");

  
  
  return 0;
}