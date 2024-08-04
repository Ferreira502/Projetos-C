#include <stdio.h>
#include <stdbool.h>

int verificar_ciclo(int N, int ciclo[]) {
    bool pontos_cobertos[N + 1]; // Usaremos um vetor de booleanos para manter o controle dos pontos cobertos
    int num_soldas = 0;
    int pontos_cobertos_count = 0;
    
    // Inicializar o vetor de pontos cobertos como falso
    for (int i = 1; i <= N; i++) {
        pontos_cobertos[i] = false;
    }
    
    // Percorrer o ciclo de solda
    for (int i = 0; i < 2 * N; i++) {
        num_soldas++;
        int ponto = ciclo[i];
        
        // Se o ponto ainda não foi coberto, marcá-lo como coberto e atualizar o contador
        if (!pontos_cobertos[ponto]) {
            pontos_cobertos[ponto] = true;
            pontos_cobertos_count++;
        }
        
        // Se todos os pontos foram cobertos, retornar o número de soldas
        if (pontos_cobertos_count == N) {
            return num_soldas;
        }
    }
    
    // Se não todos os pontos foram cobertos, retornar 0
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    
    int ciclo[2 * N];
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d", &ciclo[i]);
    }
    
    // Verificar o ciclo
    int resultado = verificar_ciclo(N, ciclo);
    
    // Saída
    printf("%d\n", resultado);
    
    return 0;
}
