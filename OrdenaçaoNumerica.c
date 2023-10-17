#include <stdio.h>

int main() {
   int numeros[10], i, j, temp;


   printf("Digite 10 numeros:\n");
   for (i = 0; i < 10; i++) {
      scanf("%d", &numeros[i]);
   }
  

   for (i = 0; i < 10; i++) {
      for (j = 0; j < 9; j++) {
         if (numeros[j] > numeros[j+1]) {
            temp = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = temp;
         }
      }
   }

 
   printf("Os numeros em ordem crescente sao:\n");
   for (i = 0; i < 10; i++) {
      printf("%d ", numeros[i]);
   }

   return 0;
}