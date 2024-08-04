#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int divisores = 1;
    int expoente = 0;

    while (n % 2 == 0) {
        n /= 2;
        expoente++;
    }
    divisores *= (expoente + 1);

    for (int i = 3; i * i <= n; i += 2) {
        expoente = 0;
        while (n % i == 0) {
            n /= i;
            expoente++;
        }
        divisores *= (expoente + 1);
    }

    if (n > 2)
        divisores *= 2;

    printf("%d", divisores);

    return 0;
}
