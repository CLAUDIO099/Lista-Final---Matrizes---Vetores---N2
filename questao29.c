#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4, media, mediaTurma;
    int i;

    mediaTurma = 0.0;

    i = 1;
    while (i <= 5) {
        printf("Digite as 4 notas do aluno %d: ", i);
        scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

        media = (nota1 * 3 + nota2 * 2 + nota3 + nota4) / 7.0;
        printf("Média do aluno %d: %.2lf\n", i, media);

        if (media >= 7.0) {
            printf("O aluno passou.\n");
        } else if (media >= 4.0) {
            printf("O aluno está de recuperação e precisa de %.2lf pontos para ser aprovado.\n", 10.0 - media);
        } else {
            printf("O aluno não passou.\n");
        }

        mediaTurma += media;

        i++;
    }

    printf("Média da turma: %.2lf\n", mediaTurma / 5.0);

    return 0;
}
