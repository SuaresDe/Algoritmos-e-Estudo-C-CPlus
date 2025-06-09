#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

void limparTela() {
    system("cls"); 
}

void definirCorVerde() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
}

void resetarCor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7); 
}

void animarProcurando() {
    printf("Procurando o alien");
    for (int i = 0; i < 3; i++) {
        Sleep(500);
        printf(".");
        fflush(stdout);
    }
    printf("\n");
}

void titulo() {
    limparTela();
    definirCorVerde();
    printf("+=======================================+\n");
    printf("|           MATE O ALIEN - XP\           |\n");
    printf("+=======================================+\n\n");
    resetarCor();
}

int escolherDificuldade() {
    int escolha;
    printf("Escolha a dificuldade:\n");
    printf("1 - Facil (10 balas)\n");
    printf("2 - Normal (6 balas)\n");
    printf("3 - Dificil (3 balas)\n");
    printf("Digite: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: return 10;
        case 2: return 6;
        case 3: return 3;
        default: return 6;
    }
}

int main() {
    int localizacao_alien, chute, tentativas, balas;
    char jogar_novamente;

    srand(time(NULL));

    do {
        titulo();

        printf("Jogador 1, escolha a arvore (1 a 100) onde o alien vai se esconder: ");
        scanf("%d", &localizacao_alien);
        limparTela();

        titulo();
        balas = escolherDificuldade();
        printf("\nJogador 2, voce tem %d balas. Boa sorte!\n", balas);

        for (tentativas = 1; tentativas <= balas; tentativas++) {
            printf("\nTentativa %d de %d\n", tentativas, balas);
            printf("Em qual arvore voce atira (1 a 100)? ");
            scanf("%d", &chute);

            if (chute < 1 || chute > 100) {
                printf("Tiro invalido! Use numeros entre 1 e 100.\n");
                tentativas--;
                continue;
            }

            printf("BANG!\a\n");
            animarProcurando();

            if (chute == localizacao_alien) {
                printf("\nAcertou! O alien estava na arvore %d!\n", chute);
                printf("Voce salvou a Terra!\n");
                break;
            } else {
                int distancia = abs(chute - localizacao_alien);

                if (chute < localizacao_alien) {
                    printf("Alien: Estou mais para a DIREITA!\n");
                } else {
                    printf("Alien: Estou mais para a ESQUERDA!\n");
                }

                if (distancia > 50)
                    printf("Dica: Muito longe...\n");
                else if (distancia > 20)
                    printf("Dica: Frio...\n");
                else
                    printf("Dica: Quente! Quase la!\n");
            }
        }

        if (chute != localizacao_alien) {
            printf("\nSuas balas acabaram...\n");
            printf("O alien estava na arvore %d. Fim de jogo.\n", localizacao_alien);
        }

        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar_novamente);
        limparTela();

    } while (jogar_novamente == 's' || jogar_novamente == 'S');

    printf("Obrigado por jogar MATE O ALIEN!\n");
    return 0;
}
