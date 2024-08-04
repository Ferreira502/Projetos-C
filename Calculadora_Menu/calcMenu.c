#include <stdio.h>
#include <stdlib.h>

int soma(int,int);
int subtracao(int,int);
int multiplicacao(int,int);
int divisao(int,int);

void menu() {
    printf("\n\t\tMenu de Opcoes\n");
    printf("\n\t*******************************\n");
    printf("\nOpcao 1) Soma");
    printf("\nOpcao 2) Subtracao");
    printf("\nOpcao 3) Multiplicacao");
    printf("\nOpcao 4) Divisao");
    printf("\nOpcao 5) Encerrar");
}

int main (){
    int escolha, num1, num2, resultado;

    do {
        menu();
        printf("\nOpcao: ");
        scanf("%d",&escolha);

        if(escolha >= 1 && escolha <= 4) {
            printf("\nDigite o primeiro numero: ");
            scanf("%d",&num1);
            printf("\nDigite o segundo numero: ");
            scanf("%d",&num2);
        }

        switch(escolha){

        case 1:
            resultado = soma(num1, num2);
            printf("\nResultado da soma: %d\n", resultado);
            break;

        case 2:
            resultado = subtracao(num1, num2);
            printf("\nResultado da subtracao: %d\n", resultado);
            break;

        case 3:
            resultado = multiplicacao(num1, num2);
            printf("\nResultado da multiplicacao: %d\n", resultado);
            break;

        case 4:
            resultado = divisao(num1, num2);
            printf("\nResultado da divisao: %d\n", resultado);
            break;

        case 5:
            printf("\nEncerrando\n");
            break;

        default:
            printf("\nOpcao invalida\n");
            break;
        }

    } while(escolha != 5);

    return 0;
}

int soma(int x, int y){
    return x + y;
}

int subtracao(int x, int y){
    return x - y;
}

int multiplicacao(int x, int y){
    return x * y;
}

int divisao(int x, int y){
    if(y != 0) {
        return x / y;
    } else {
        printf("Erro: Divisao por zero\n");
        return 0;
    }
}