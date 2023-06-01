#include <stdio.h>

int main() {
    float preco, novo_preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    novo_preco = preco * 0.91;

    printf("O novo preço com desconto de 9%% é R$%.2f.\n", novo_preco);

    return 0;
}