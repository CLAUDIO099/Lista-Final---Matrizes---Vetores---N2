#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        printf("A raiz quadrada do número é %.2lf.\n", sqrt(numero));
    } else {
        printf("O número elevado ao quadrado é %.2lf.\n", pow(numero, 2));
    }

    return 0;
}