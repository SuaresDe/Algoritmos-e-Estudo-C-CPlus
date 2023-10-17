#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da árvore
typedef struct No {
    int valor;
    struct No* esquerda;
    struct No* direita;
} No;

// Função para criar um novo nó com um valor específico
No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// Função para inserir um nó em uma árvore existente
void inserirNo(No** raiz, int valor, char direcao) {
    if (*raiz == NULL) {
        *raiz = criarNo(valor);
        return;
    }

    if (direcao == 'e') {
        inserirNo(&((*raiz)->esquerda), valor, direcao);
    } else if (direcao == 'd') {
        inserirNo(&((*raiz)->direita), valor, direcao);
    } else {
        printf("Direcao invalida. O no nao sera criado.\n");
    }
}

// Função para remover um nó da árvore
No* removerNo(No* raiz, int valor) {
    if (raiz == NULL) {
        return raiz;
    }

    if (raiz->valor == valor) {
        if (raiz->esquerda == NULL && raiz->direita == NULL) {
            free(raiz);
            return NULL;
        } else {
            printf("O no possui filhos e nao pode ser removido.\n");
            return raiz;
        }
    }

    raiz->esquerda = removerNo(raiz->esquerda, valor);
    raiz->direita = removerNo(raiz->direita, valor);

    return raiz;
}

// Função para buscar um nó na árvore
int buscarNo(No* raiz, int valor, int* numVisitas) {
    (*numVisitas)++;

    if (raiz == NULL) {
        return 0;
    }

    if (raiz->valor == valor) {
        return 1;
    }

    int encontradoEsquerda = buscarNo(raiz->esquerda, valor, numVisitas);
    int encontradoDireita = buscarNo(raiz->direita, valor, numVisitas);

    return encontradoEsquerda || encontradoDireita;
}

// Função para percurso em ordem (in-order traversal)
void percursoEmOrdem(No* raiz) {
    if (raiz != NULL) {
        percursoEmOrdem(raiz->esquerda);
        printf("%d ", raiz->valor);
        percursoEmOrdem(raiz->direita);
    }
}

// Função para percurso em pré-ordem (pre-order traversal)
void percursoPreOrdem(No* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        percursoPreOrdem(raiz->esquerda);
        percursoPreOrdem(raiz->direita);
    }
}

// Função para percurso em pós-ordem (post-order traversal)
void percursoPosOrdem(No* raiz) {
    if (raiz != NULL) {
        percursoPosOrdem(raiz->esquerda);
        percursoPosOrdem(raiz->direita);
        printf("%d ", raiz->valor);
    }
}

// Função para percorrer por altura (level-order traversal)
void percorrerPorAltura(No* raiz) {
    if (raiz == NULL) {
        return;
    }

    // Criar uma fila para percorrer por altura
    No** fila = (No**)malloc(sizeof(No*) * 100);
    int frente = 0;
    int tras = 0;

    fila[tras++] = raiz;

    while (frente < tras) {
        No* noAtual = fila[frente++];
        printf("%d ", noAtual->valor);

        if (noAtual->esquerda != NULL) {
            fila[tras++] = noAtual->esquerda;
        }

        if (noAtual->direita != NULL) {
            fila[tras++] = noAtual->direita;
        }
    }

    free(fila);
}

// Função para liberar a memória alocada pela árvore
void liberarArvore(No* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}

int main() {
    No* raiz = NULL;
    int opcao, numeroNos, valor, numVisitas;

    do {
        printf("\nMenu de Opcoes:\n");
        printf("1) Criar uma arvore aleatoria\n");
        printf("2) Representar visualmente a arvore\n");
        printf("3) Criar uma arvore manualmente\n");
        printf("4) Remover um no\n");
        printf("5) Buscar um no\n");
        printf("6) Percurso em ordem\n");
        printf("7) Percurso em pre-ordem\n");
        printf("8) Percurso em pos-ordem\n");
        printf("9) Percorrer por altura\n");
        printf("0) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                liberarArvore(raiz);
                raiz = NULL;

                printf("Digite o numero de nos: ");
                scanf("%d", &numeroNos);

                for (int i = 0; i < numeroNos; i++) {
                    valor = rand() % 100;  // Gerar um valor aleatório entre 0 e 99
                    inserirNo(&raiz, valor, 'e');
                }

                printf("Arvore aleatoria criada.\n");
                break;

            case 2:
                printf("Representacao visual da arvore:\n");
                // Implemente aqui a função para representar visualmente a árvore
                break;

            case 3:
                liberarArvore(raiz);
                raiz = NULL;

                printf("Crie uma arvore manualmente:\n");
                printf("Informe 'e' para inserir um no a esquerda, 'd' para inserir a direita ou qualquer outra tecla para nao criar o no:\n");

                do {
                    printf("Digite o valor do no: ");
                    scanf("%d", &valor);

                    char direcao;
                    printf("Digite a direcao do no: ");
                    scanf(" %c", &direcao);

                    inserirNo(&raiz, valor, direcao);

                    printf("Deseja continuar? (s/n): ");
                    scanf(" %c", &opcao);
                } while (opcao == 's');

                printf("Arvore criada.\n");
                break;

            case 4:
                printf("Digite o valor do no que deseja remover: ");
                scanf("%d", &valor);
                raiz = removerNo(raiz, valor);
                printf("No removido.\n");
                break;

            case 5:
                printf("Digite o valor do no que deseja buscar: ");
                scanf("%d", &valor);

                numVisitas = 0;
                if (buscarNo(raiz, valor, &numVisitas)) {
                    printf("No encontrado. Numero de visitas: %d\n", numVisitas);
                } else {
                    printf("No nao encontrado.\n");
                }

                break;

            case 6:
                printf("Percurso em ordem: ");
                percursoEmOrdem(raiz);
                printf("\n");
                break;

            case 7:
                printf("Percurso em pre-ordem: ");
                percursoPreOrdem(raiz);
                printf("\n");
                break;

            case 8:
                printf("Percurso em pos-ordem: ");
                percursoPosOrdem(raiz);
                printf("\n");
                break;

            case 9:
                printf("Percorrer por altura: ");
                percorrerPorAltura(raiz);
                printf("\n");
                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    liberarArvore(raiz);

    return 0;
}
