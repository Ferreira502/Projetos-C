// Escreva um programa que carregue um vetor com N números reais, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.
// FEITO POR: GABRIEL FERREIRA PEREIRA

#include<stdio.h>

int main() {
    int n, quant = 0;
    float soma = 0;

    scanf("%d", &n);

    float vetor[n];

    for(int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
        if(vetor[i] < 0) {
            quant++;
        } else {
            soma += vetor[i];
        }
    }

    printf("%d %.0f", quant, soma);

    return 0;
}
