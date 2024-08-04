#include <stdio.h>

int main()
{
    float altura, base, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\nArea do triangulo = %.0f", area);

    return 0;
}
