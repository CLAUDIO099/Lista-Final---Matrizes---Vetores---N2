#include <stdio.h>

int main() {
    char tipo;
    float distancia, consumo;
    printf("Digite o tipo de carro (A, B ou C): ");
    scanf(" %c", &tipo);
    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);
    switch (tipo) {
        case 'A':
            consumo = distancia / 8.0;
            printf("O consumo estimado é de %.2f litros.\n", consumo);
            break;
        case 'B':
            consumo = distancia / 9.0;
            printf("O consumo estimado é de %.2f litros.\n", consumo);
            break;
        case 'C':
            consumo = distancia / 12.0;
            printf("O consumo estimado é de %.2f litros.\n", consumo);
            break;
        default:
            printf("Tipo de carro inválido. Digite A, B ou C.\n");
    }
    return 0;
}