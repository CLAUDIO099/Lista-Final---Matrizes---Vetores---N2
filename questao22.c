#include <stdio.h>

int main() {
    int dia, mes, ano;
    printf("Digite sua data de aniversário (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (ano != 2023) {
        printf("Ano inválido. O ano deve ser 2023.\n");
    } else if (mes < 1 || mes > 12) {
        printf("Mês inválido. O mês deve estar entre 1 e 12.\n");
    } else if (dia < 1 || dia > 31) {
        printf("Dia inválido. O dia deve estar entre 1 e 31.\n");
    } else {
        printf("A data é válida.\n");
    }
    return 0;
}
