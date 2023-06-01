#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("As 4 primeiras letras do nome são: %.4s\n", nome);

    return 0;
}
