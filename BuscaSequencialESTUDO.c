#include <stdio.h>

int v[10] = {4,8,2,56,34,7,98,1,25,10};

int main() {

  int num = 10;

  for(int i = 0; i < 10; i++){
    if(v[i] == num)
    {
      printf("Elemento encontrado na posição: %d\n", i);
    }
  }
  
  // Vetor:
  // [ 4 , 8 , 2 , 56 , 34 , 7 , 98 , 1 , 25 , 10 ]
  //   0   1   2   3    4    5   6    7   8    9

  //Busca sequencial é usado quando o não vai fazer busca a todo momento ou quando o tempo não é crítico.
  
  return 0;
}