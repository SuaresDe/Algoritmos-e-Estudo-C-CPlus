#include <stdio.h>

int main(){
    int x, y;

    printf("Digite dois numeros: ");
        scanf("%d %d", &x, &y);

    if (x > y) {

        printf("\n%d eh maior que %d", x, y);

    } else if ( x == y) {

        printf("\n%d eh igual a %d", x, y);

    } else {

        printf("\n%d eh maior que %d", y, x);

    }
}