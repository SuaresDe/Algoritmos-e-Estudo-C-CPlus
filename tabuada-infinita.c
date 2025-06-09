#include <stdio.h>

int main() {
    long int x, z;

    printf("Digite um numero: ");
    scanf("%ld", &x);

    for(z = 1; z <= 10; z++) {
        printf("%ld x %ld = %ld\n", x, z, x * z);
    }

    return 0;
}
