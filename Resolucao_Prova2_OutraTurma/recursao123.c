#include <stdio.h>
#include <stdlib.h>

// Função recursiva para ler os números digitados pelo usuário e imprimir de trás para frente
void ler_e_imprimir_inverso(int tamanho) {
    if (tamanho > 0) {
        int numero;
        scanf("%d", &numero); // Lê o próximo número digitado pelo usuário
        ler_e_imprimir_inverso(tamanho - 1); // Chama recursivamente para ler o próximo número
        printf("%d ", numero); // Imprime o número lido após ler todos os números restantes
    }
}

int main() {
    int tamanho;
    printf("Digite a quantidade de números a serem digitados: ");
    scanf("%d", &tamanho);

    printf("Digite os %d números:\n", tamanho);
    ler_e_imprimir_inverso(tamanho); // Chama a função recursiva para ler e imprimir os números de trás para frente
    printf("\n");

    return 0;
}
