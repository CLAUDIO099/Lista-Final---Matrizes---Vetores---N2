#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j;
    int soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nSoma dos elementos: %d\n", soma);

    return 0;
}
