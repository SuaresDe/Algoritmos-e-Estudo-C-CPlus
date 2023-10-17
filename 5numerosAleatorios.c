#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i =0, j, igual, vet[5];
  srand(time(NULL));

  do{
    vet[i] = 1+(rand() % 80);
    igual = 0;
    for(j = 0; j < i; j++){
      if(vet[j] == vet [i])
        igual = 1;
    }
    if(igual ==0)
      i++;
    }while(i < 5);

  for(i = 0; i < 5; i++){
    printf("%d ", vet[i]);
  }
  printf("\n\n");

  return 0;
}
