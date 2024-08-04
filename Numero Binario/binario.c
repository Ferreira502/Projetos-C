#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    scanf("%d", &N);
   
    int *bits = (int *)malloc(N * sizeof(int));

    if (bits == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        scanf("%d", &bits[i]);
    }
    
    int decimal = 0;
    for (int i = 0; i < N; i++) {
        decimal = decimal * 2 + bits[i];
    }

    printf("%d\n", decimal);

    free(bits);

    return 0;
}
