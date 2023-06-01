#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }

    return 0;
}
