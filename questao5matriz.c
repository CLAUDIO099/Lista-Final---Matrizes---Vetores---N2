#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Preenche a matriz
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprime todos os elementos, exceto os da diagonal principal
    printf("\nElementos, exceto a diagonal principal:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i != j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }

    return 0;
}
