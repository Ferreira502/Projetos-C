// Escreva um programa em C que leia um número N de strings, conforme determinado pelo usuário. 
// O programa deve então imprimir a maior string em termos de comprimento (tamanho) e a maior string em termos lexicográficos (ordem alfabética).
//FEITO POR GABRIEL FERREIRA PEREIRA

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char buffer[1000];

    fgets(buffer, sizeof(buffer), stdin);
    N = atoi(buffer);

    char longest_string[1000] = "";
    char largest_lexicographic_string[1000] = "";

    for (int i = 0; i < N; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strcspn(buffer, "\n")] = 0;

        if (strlen(buffer) > strlen(longest_string)) {
            strcpy(longest_string, buffer);
        }

        if (strcmp(buffer, largest_lexicographic_string) > 0) {
            strcpy(largest_lexicographic_string, buffer);
        }
    }

    printf("%s\n", longest_string);
    printf("%s\n", largest_lexicographic_string);

    return 0;
}
