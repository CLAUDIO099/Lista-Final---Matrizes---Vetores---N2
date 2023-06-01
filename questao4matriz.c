#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;

    // Preenche a matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime os elementos da diagonal principal
    printf("\nElementos da diagonal principal:\n");
    for (i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    return 0;
}
