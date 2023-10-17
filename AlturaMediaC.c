#include <stdio.h>


int main() {

  int N, menores; 
  double soma, media, percentualmenores;
  
  printf("Quantas pessoas serão digitadas? ");
  scanf("%d", &N);
  
  char nomes[N][50];
  int idades[N];
  double alturas[N];
  

  for (int i = 0; i < N; i++) {
    
    printf("Dados da %da pessoa:\n", i + 1);
      
      printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        fgets(nomes[i]);
       

      printf("Idade: ");
        scanf("%d", &idades[N]);

      printf("Altura: ");
        scanf("%2lf", &alturas[N]); 
  }

  soma = 0;
  for (int i = 0; i < N; i++) {
      soma = soma + alturas[i];
  }
  media = soma / N;
  printf("\nAltura media: %2lf\n", media);

  menores = 0;
  for (int i = 0; i < N; i++) {
      if (idades[i] < 16) {
          menores++;
      }
  }
  percentualmenores = (double) menores * 100.0 / N;
  printf("Pessoas com menores de 16 anos: %1lf %%\n", percentualmenores);

  for(int i = 0; i < N; i++) {
      if (idades[i] < 16) {
        printf("%s\n", nomes[i]);
      }
}
  return 0;
}