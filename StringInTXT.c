#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    int fd = open("test2.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int n = write(fd, str, strlen(str));
    if (n == -1) {
        printf("Erro ao escrever no arquivo\n");
        return 1;
    }

    printf("String gravada com sucesso no arquivo!\n");
    close(fd);
    return 0;
}