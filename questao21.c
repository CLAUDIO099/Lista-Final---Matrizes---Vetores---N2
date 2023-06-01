#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite os lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("O triângulo é equilátero.\n");
    } else if (a == b || b == c || a == c) {
        printf("O triângulo é isósceles.\n");
    } else {
        printf("O triângulo é escaleno.\n");
    }
    return 0;
}