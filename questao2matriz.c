#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz multiplicada por 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= 2;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
