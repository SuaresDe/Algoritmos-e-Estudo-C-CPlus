#include <stdio.h>

#define N 3

void multiplicarMatrizes(int matrizA[][N], int matrizB[][N], int resultado[][N]) {
    int i, j, k;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < N; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void exibirMatriz(int matriz[][N]) {
    int i, j;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[N][N];
    
    multiplicarMatrizes(matrizA, matrizB, resultado);
    
    printf("Matriz A:\n");
    exibirMatriz(matrizA);
    
    printf("\nMatriz B:\n");
    exibirMatriz(matrizB);
    
    printf("\nResultado da multiplicação:\n");
    exibirMatriz(resultado);
    
    return 0;
}
