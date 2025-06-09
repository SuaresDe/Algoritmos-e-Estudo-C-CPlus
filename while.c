#include <stdio.h>

main(){

    int x=0, y=0;

    while(x<5){
        printf("\nX eh menor que 5!");
        x++;

    }
    if (x=5){
        printf("\nX eh igual a 5");
    } else {
        printf("\nX eh maior que 5");
    }

    while(y<10){
        printf("\nDigite um numero: ");
            scanf("%d", &y);
    }
}