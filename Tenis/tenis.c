// A prefeitura contratou um novo professor para ensinar as crianças do bairro a jogar tênis na quadra de tênis do parque municipal. 
// O professor convidou todas as crianças do bairro interessadas em aprender a jogar tênis. 
// Ao final do primeiro mês de aulas e treinamentos foi organizado um torneio em que cada participante disputou exatamente seis jogos. 
// O professor vai usar o desempenho no torneio para separar as crianças em três grupos, 
// de forma a ter grupos de treino em que os participantes tenham habilidades mais ou menos iguais, usando o seguinte critério:
// // FEITO POR GABRIEL FERREIRA

#include <stdio.h>

int main() {
    char resultados[6];
    int vitorias = 0;

    for (int i = 0; i < 6; i++) {
        scanf(" %c", &resultados[i]);
        if (resultados[i] == 'V')
            vitorias++;
    }
    int grupo;
    if (vitorias >= 5)
        grupo = 1;
    else if (vitorias >= 3)
        grupo = 2;
    else if (vitorias >= 1)
        grupo = 3;
    else
        grupo = -1;

    printf("%d\n", grupo);

    return 0;
}
