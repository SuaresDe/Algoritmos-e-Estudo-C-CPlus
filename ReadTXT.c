#include <fcntl.h>
#include <stdio.h>

int main() {
    char buffer[100];
    int fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int n = read(fd, buffer, 100);
    if (n == -1) {
        printf("Erro ao ler o arquivo\n");
        return 1;
    }

    printf("Conteúdo do arquivo: %s\n", buffer);
    close(fd);
    return 0;
}