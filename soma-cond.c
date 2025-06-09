#include <stdint.h>

int main() {
    int x, total = 0, option;

    do {
        printf("Digite um numero: ");
        scanf("%d", &x);
        total += x;

        printf("Mais algum numero vai ser digitado? 1 = Sim | 0 = Nao: ");
        scanf("%d", &option);
    } while (option == 1);

    printf("Soma total: %d\n", total);


    return 0;
}