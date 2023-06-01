#include <stdio.h>
#define PI 3.14159

int main() {
    float raio, diametro, comprimento, area;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    // Calcula o diâmetro
    diametro = 2 * raio;

    // Calcula o comprimento
    comprimento = 2 * PI * raio;

    // Calcula a área
    area = PI * raio * raio;

    // Exibe os resultados
    printf("Diametro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Area: %.2f\n", area);

    return 0;
}
