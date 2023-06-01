#include <stdio.h>

int main() {
    double valorCompra, valorVenda;

    printf("Digite o valor de compra do produto: ");
    scanf("%lf", &valorCompra);

    if (valorCompra < 20.0) {
        valorVenda = valorCompra * 1.45;
    } else {
        valorVenda = valorCompra * 1.30;
    }

    printf("O valor de venda do produto é %.2lf.\n", valorVenda);

    return 0;
}
