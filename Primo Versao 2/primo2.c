// PRIMO VERSAO 2 ---- FEITO POR GABRIEL FERREIRA

#include <stdio.h>


int ehPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

   
    if (num1 >= num2) {
        printf("O primeiro número deve ser menor que o segundo.\n");
        return 1; // Encerra o programa com erro
    }

    for (int i = num1; i <= num2; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
