#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 10 && idade <= 14) {
        printf("Você está na categoria infantil.\n");
    } else if (idade >= 15 && idade <= 17) {
        printf("Você está na categoria juvenil.\n");
    } else if (idade >= 18 && idade <= 25) {
        printf("Você está na categoria adulto.\n");
    } else {
        printf("Você não se enquadra em nenhuma das categorias.\n");
    }

    return 0;
}
