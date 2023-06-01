#include <stdio.h>

int main() {
    char operador;
    double primeiroNumero, segundoNumero;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois operandos: ");
    scanf("%lf %lf",&primeiroNumero, &segundoNumero);

    switch(operador)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",primeiroNumero, segundoNumero, primeiroNumero + segundoNumero);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",primeiroNumero, segundoNumero, primeiroNumero - segundoNumero);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",primeiroNumero, segundoNumero, primeiroNumero * segundoNumero);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",primeiroNumero, segundoNumero, primeiroNumero / segundoNumero);
            break;

        default:
            printf("Erro! operador não é correto");
    }

    return 0;
}
