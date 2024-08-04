// Escreva um programa que receba um número inteiro e imprima os dígitos desse número na ordem inversa.
// FEITO POR GABRIEL FERREIRA

#include <stdio.h>

int main() {
    int numero, ultimodigito, inverso = 0;
    scanf("%d", &numero);
    
    while (numero != 0) {
        ultimodigito = numero % 10;
        inverso = (inverso * 10) + ultimodigito;
        numero /= 10;
    }

    printf("%d", inverso);

}
