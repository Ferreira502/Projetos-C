// Escreva um programa em C que leia um número N de strings e uma palavra-alvo, conforme determinado pelo usuário. 
// O programa deve contar e imprimir quantas dessas strings contêm a palavra-alvo (considerando a palavra inteira, sem distinguir maiúsculas de minúsculas).
//FEITO POR GABRIEL FERREIRA PEREIRA

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int N, count = 0;
    char palavra_alvo[100];
    
    scanf("%d", &N);
    
    scanf("%s", palavra_alvo);
    
    for (int i = 0; palavra_alvo[i]; i++) {
        palavra_alvo[i] = tolower(palavra_alvo[i]);
    }
    
    getchar();
    
    for (int i = 0; i < N; i++) {
        char str[1000];
        fgets(str, sizeof(str), stdin);
        
        for (int j = 0; str[j]; j++) {
            str[j] = tolower(str[j]);
        }
        
        if (str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1] = '\0';
        
        char *ptr = str;
        while ((ptr = strstr(ptr, palavra_alvo)) != NULL) {
            count++;
            ptr++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
