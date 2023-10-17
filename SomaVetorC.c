#include <stdio.h>


int N;

double soma, media;
  

int main(void) {

  
  printf("Quantos numeros você vai digitar? ");
  scanf("%d", &N);

  double vet[N];

  for (int i = 0; i < N; i++) {
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
  }

  printf("\nVALORES = ");
  for (int i = 0; i < N; i++) {
    printf("%.1lf ", vet[i]);}

  soma = 0;
  for(int i = 0; i < N; i++) {
     soma = soma + vet[i];}
  printf("\nSOMA = %.2lf\n", soma);

  media = soma / N;
  printf("MEDIA = %.2lf", media);

  
  return 0;
} 