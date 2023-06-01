#include <stdio.h>

int main() {
    float num;

    printf("Digite um número decimal: ");
    scanf("%f", &num);

    printf("O número em hexadecimal é %x.\n", (int)num);
    printf("O número em octal é %o.\n", (int)num);

    return 0;
}