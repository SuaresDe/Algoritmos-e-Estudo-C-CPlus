#include <stdio.h>

//codigo de calculo de potencia usando recursão

int potencia(int base, int expoente){
  
  if(expoente==1){
  return base;
  }
  return base * potencia(base,expoente-1);
}

/*
base   ep
2      4
2      3
2      2
2      1

2*2*2*2 = 16
*/

int main() {

  
  int v = potencia(2,4); //2*2*2*2 = 16
  printf("%d", v);
  
  return 0;
}