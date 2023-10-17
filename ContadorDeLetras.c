#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int totalLetras = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (int i = 0; palavra[i] != '\0'; i++) {
        if (isalpha(palavra[i])) {
            totalLetras++;
        }
    }

    printf("Total de letras na palavra: %d\n", totalLetras);

    return 0;
}