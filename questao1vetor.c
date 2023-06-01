#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior;

    // Preenche o vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Encontra o maior número
    maior = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    // Imprime o maior número
    printf("O maior numero do vetor: %d\n", maior);

    return 0;
}
