#include <stdio.h>

int main() {
    int idade, faixa1, faixa2, faixa3, faixa4;
    double peso, somaPeso1, somaPeso2, somaPeso3, somaPeso4;
    int i;

    faixa1 = faixa2 = faixa3 = faixa4 = 0;
    somaPeso1 = somaPeso2 = somaPeso3 = somaPeso4 = 0.0;

    i = 1;
    while (i <= 15) {
        printf("Digite a idade e o peso da pessoa %d: ", i);
        scanf("%d %lf", &idade, &peso);

        if (idade >= 1 && idade <= 10) {
            faixa1++;
            somaPeso1 += peso;
        } else if (idade >= 11 && idade <= 20) {
            faixa2++;
            somaPeso2 += peso;
        } else if (idade >= 21 && idade <= 30) {
            faixa3++;
            somaPeso3 += peso;
        } else {
            faixa4++;
            somaPeso4 += peso;
        }

        i++;
    }

    printf("Média de peso da faixa etária 1-10 anos: %.2lf\n", somaPeso1 / faixa1);
    printf("Média de peso da faixa etária 11-20 anos: %.2lf\n", somaPeso2 / faixa2);
    printf("Média de peso da faixa etária 21-30 anos: %.2lf\n", somaPeso3 / faixa3);
    printf("Média de peso da faixa etária acima de 30 anos: %.2lf\n", somaPeso4 / faixa4);

    return 0;
}
