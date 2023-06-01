#include <stdio.h>

int main() {
    int tamanho, linha, coluna;

    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &tamanho);

    linha = 0;
    while (linha < tamanho) {
        coluna = 0;
        while (coluna < tamanho) {
            printf("*");
            coluna++;
        }
        printf("\n");
        linha++;
    }

    return 0;
}
