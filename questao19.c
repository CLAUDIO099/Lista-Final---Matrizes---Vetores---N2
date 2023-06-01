#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Você é um não-eleitor.\n");
    } else if (idade >= 18 && idade <= 65) {
        printf("Você é um eleitor obrigatório.\n");
    } else {
        printf("Você é um eleitor facultativo.\n");
    }

    return 0;
}