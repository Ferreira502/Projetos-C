// Enquanto o valor -1 não for digitado, leia os números fornecidos pelo usuário. No final, exiba quantos números foram digitados e quantas vezes o número 5 foi digitado.
// FEITO POR GABRIEL FERREIRA PEREIRA

#include<stdio.h>

int main() {
    int numeros, cont = 0, contadornumeros = 0;

    while (1) { 
        scanf("%d", &numeros);

        if (numeros == -1) {
            break; 
        }

        contadornumeros++;

        if (numeros == 5) {
            cont++;
        }
    }
    printf("%d %d",contadornumeros,cont);
}
