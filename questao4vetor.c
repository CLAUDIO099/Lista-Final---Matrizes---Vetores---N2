#include <stdio.h>

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int vetor[10];
    int i, j;
    int primeCount = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros primos no vetor: ");
    for (i = 0; i < 10; i++) {
        if (isPrime(vetor[i])) {
            printf("%d ", vetor[i]);
            primeCount++;
        }
    }

    if (primeCount == 0) {
        printf("Nenhum numero primo encontrado no vetor.");
    }

    return 0;
}
