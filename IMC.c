#include <stdio.h>
#include <math.h>

int main(){
    float altura, peso, imc;

    printf("Digite sua ALTURA: ");
        scanf("%f", &altura);

    printf("Digite seu PESO: ");
        scanf("%f", &peso);

    imc = peso / (altura * altura);

    if (imc < 20){

        printf("\nAbaixo do peso");

    } else if (imc < 26)
    {
        printf("\nPeso Normal");
    } else if (imc < 31)
    {
        printf("\nSobre Peso");
    } else if (imc < 41)
    {
        printf("\nObeso");
    } else {
        printf("\nObeso Morbido");
    }
    return 0;
}


