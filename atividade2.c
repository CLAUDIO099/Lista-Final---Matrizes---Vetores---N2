#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("O antecessor de %d é %d.\n", num, num - 1);
    printf("O sucessor de %d é %d.\n", num, num + 1);

    return 0;
}
