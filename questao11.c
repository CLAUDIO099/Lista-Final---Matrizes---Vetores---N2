#include <stdio.h>

int main() {
    float valor_hora, num_aulas, salario_bruto, salario_liquido;
    int desconto;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valor_hora);

    printf("Digite o número de aulas dadas: ");
    scanf("%f", &num_aulas);

    salario_bruto = valor_hora * num_aulas * 4.5;

    printf("Digite a porcentagem de desconto do INSS sobre o valor bruto do salário: ");
    scanf("%d", &desconto);

    salario_liquido = salario_bruto * (1 - (float)desconto / 100);

    printf("O salário líquido do professor é R$%.2f.\n", salario_liquido);

    return 0;
}
