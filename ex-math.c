#include <stdio.h>

main(){
    int n1, n2, result;

    printf("Digite dois numeros: ");
        scanf("%d %d",&n1,&n2);

    printf("\nAdicao = %d\nSubtracao = %d\nMultiplicacao = %d\nDivisao = %d\nResto de Divisao = %d", n1 + n2, n1 - n2, n1 * n2, n1 / n2, n1 % n2);

    int x;

    printf("\nDigite um numero: ");
        scanf("%d",&x);

    result = x*x*x;

    printf("Cube: %d", result);
}