// FEITO POR GABRIEL FERREIRA PEREIRA

#include <stdio.h>
#include <stdlib.h>

void imprimir(char a, int n) {
    for (int i = 0; i < n; i++) {
        putchar(a);
    }
}

void losango(int a, int b) {
    if (a == 0)
        return 1;
    imprimir(' ', a - 1);
    imprimir('*', 2 * b + 1);
    putchar('\n');
    losango(a - 1, b + 1);
    imprimir(' ', a - 1);
    imprimir('*', 2 * b + 1);
    putchar('\n');
}

void printDiamond(int n) {
    if (n <= 0) {
        return 1;
    }

    if (n % 2 == 0) {
        n++;
    }

    int middle = n / 2;

    for (int i = 0; i <= middle; i++) {
        imprimir(' ', middle - i);
        imprimir('*', 2 * i + 1);
        putchar('\n');
    }

    for (int i = middle - 1; i >= 0; i--) {
        imprimir(' ', middle - i);
        imprimir('*', 2 * i + 1);
        putchar('\n');
    }
}

int main() {
    int num;
    scanf("%d", &num);

    printDiamond(num);

    return 0;
}
