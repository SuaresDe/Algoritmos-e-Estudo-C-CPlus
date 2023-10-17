#include <stdio.h>

int main(void) {

  int x, i, m;

  
  printf("Deseja a tabuada para qual valor? ");
  scanf("%d", &x);

  for (i = 1; i <= 10; i++) {
    
  m = x * i;
    
  printf("%d X %d = %d\n", x, i, m);

  }
  return 0;
}