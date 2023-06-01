#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("A soma dos números é %.2f.\n", num1 + num2);
    printf("O produto do primeiro número pelo quadrado do segundo é %.2f.\n", num1 * pow(num2, 2));
    printf("O quadrado do primeiro número é %.2f.\n", pow(num1, 2));
    printf("A raiz quadrada da soma dos quadrados é %.2f.\n", sqrt(pow(num1, 2) + pow(num2, 2)));
    printf("O seno da diferença do primeiro número pelo segundo é %.2f.\n", sin(num1 - num2));

    return 0;
}