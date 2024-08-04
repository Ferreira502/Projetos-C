// Faça um algoritmo para determinar o valor de S dado pela série
// S =1/1 +3/2 +5/3 +7/4+9/5+⋯
//FEITO POR GABRIEL FERREIRA PEREIRA

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vetor[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    int ultima_posicao = 0;

    for (int i = 1; i < N; i++) {
        if (vetor[i] >= maior) {
            maior = vetor[i];
            ultima_posicao = i;
        }
    }

    printf("%d %d\n", maior, ultima_posicao);
}