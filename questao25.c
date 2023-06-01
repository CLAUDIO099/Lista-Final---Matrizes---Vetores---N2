#include <stdio.h>

int main(void) {
    int num_alunos;
    double nota, soma = 0;
    int i = 0;

    printf("Quantos alunos tem na sala? ");
    scanf("%d", &num_alunos);

    while (i < num_alunos) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%lf", &nota);
        soma += nota;
        i++;
    }

    printf("A média da turma é: %.2lf\n", soma / num_alunos);

    return 0;
}