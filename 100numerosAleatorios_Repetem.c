#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int main(void) 
  
{
  int a = 0, c = 0, j, num[100];
  printf("Cem números aleatórios e quantos foram repetidos:\n");
  srand(time(0));
  do {
    
    num[a] = rand()%100;
    a++;
    
    } while(a<100);
    for(a = 0;a<100;a++){
      printf("%i, ", num[a]);
    }

  
      for(a = 0;a<100;a++){
        for(j = a+1;j<100;j++){
          if(num[a]==num[j]){
            c=c+1;
              break;
          }
        }
      }
  
  printf("\n Numeros repetidos: %i",c);
  return 0;
    }