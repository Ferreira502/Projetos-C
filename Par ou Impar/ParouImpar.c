// DESCOBRIR SE O NUMERO É PAR OU ÍMPAR
// FEITO POR GABRIEL FERREIRA PEREIA
#include<stdio.h>
#include<math.h>

int main () {
    int numero;
    scanf("%d",&numero);

    if (numero %2 == 0) {
        printf("\npar");
    }

    else {
        printf("\nimpar");
    }

    return 0;
}
