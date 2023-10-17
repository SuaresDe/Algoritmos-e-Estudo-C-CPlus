#include <stdio.h>

int N, cont;

int main(void) {
  printf("Qual a ordem da matriz? ");
  scanf("%d", &N);

  int mat[N][N];

  for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
          printf("Elemento [%d,%d]: ", i, j);
          scanf("%d", &mat[i][j]);
    }
  }

    printf("DIAGONAL PRINCIPAL: ");
      for (int i = 0; i < N; i++) {
          printf("%d ", mat[i][i]);
      }

    cont = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
              cont++;
            }
        }
    }
  
    printf("\nQUANTIDADE DE NEGATIVOS: %d", cont);
    
    
  
  return 0;
}