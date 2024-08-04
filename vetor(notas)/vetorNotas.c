// Faça um programa que leia as notas de N alunos e armazene-as em um vetor.
// A partir do vetor, calcule e imprima a maior nota, a menor nota e a nota média dos alunos.
// Separe o programa em duas fases:
// preenchimento do vetor;
// processamento do vetor.
// FEITO POR GABRIEL FERREIRA PEREIRA

#include <stdio.h>

int main() {
    int N;
    float nota, soma = 0, maior = -1, menor = 11;

    scanf("%d", &N);

    float notas[N];

    for (int i = 0; i < N; i++) {
        scanf("%f", &nota);
        notas[i] = nota;
        soma += nota;

        if (nota > maior)
            maior = nota;
        if (nota < menor)
            menor = nota;
    }

    float media = soma / (float)N;

    printf("%.1f %.1f %.1f\n", maior, menor, media);

    return 0;
}
