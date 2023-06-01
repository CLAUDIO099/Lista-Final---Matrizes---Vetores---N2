#include <stdio.h>
#include <stdbool.h>

int main() {
    int vetor[8], numero, posicao;
    bool encontrado;
    int i;

    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para pesquisar: ");
    scanf("%d", &numero);

    encontrado = false;
    for (i = 0; i < 8; i++) {
        if (vetor[i] == numero) {
            encontrado = true;
            posicao = i;
            break;
        }
    }

    if (encontrado) {
        printf("O número %d foi encontrado na posição %d do vetor.\n", numero, posicao);
    } else {
        printf("O número %d não foi encontrado no vetor.\n", numero);
    }

    return 0;
}
