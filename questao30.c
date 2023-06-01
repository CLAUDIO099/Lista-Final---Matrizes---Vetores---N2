#include <stdio.h>

void ordenaCrescente(int lista[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (lista[i] > lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

void ordenaDecrescente(int lista[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (lista[i] < lista[j]) {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

void imprimeLista(int lista[], int tamanho) {
    int i;

    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10], listaOriginal[10], opcao;
    int i;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
        listaOriginal[i] = lista[i];
    }

    printf("Escolha uma opção:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        ordenaCrescente(lista, 10);
        imprimeLista(lista, 10);
    } else if (opcao == 2) {
        ordenaDecrescente(lista, 10);
        imprimeLista(lista, 10);
    } else if (opcao == 3) {
        imprimeLista(listaOriginal, 10);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
