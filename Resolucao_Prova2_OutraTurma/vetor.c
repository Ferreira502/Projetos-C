#include <stdio.h>
#include <stdlib.h>

void preencher_vetor(int *vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int N;

    printf("Digite a quantidade de elementos N: ");
    scanf("%d", &N);

    // Criar dinamicamente um vetor de N elementos inteiros
    int *vetor = (int*)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Encerrar o programa com código de erro
    }

    // Preencher o vetor
    preencher_vetor(vetor, N);

    // Imprimir o vetor preenchido
    printf("Vetor preenchido:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(vetor);

    return 0;
}
