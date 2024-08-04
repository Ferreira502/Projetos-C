#include <stdio.h>

int main () {
    int n1,n2,resultado;
        printf("\nDigite o primeiro numero:");
        scanf("%d",&n1);
        printf("\nDigite o segundo numero:");
        scanf("%d",&n2);

    resultado = n1*n2;
        printf("\nO Resultado da multiplicacao de %.0d por %.0d e: %.0d", n1,n2,resultado);

    resultado = n1+n2;
        printf("\nO Resultado da soma de %.0d por %.0d e: %.0d", n1,n2,resultado);

    resultado = n1-n2;
        printf("\nO Resultado da subtracao de %.0d por %.0d e: %.0d", n1,n2,resultado);

    resultado = n1/n2;
        printf("\nO Resultado da divisao de %.0d por %.0d e: %.0d", n1,n2,resultado);

    if ("resultado <=0"){
        printf("\nEsse numero nao existe");
    }

}

