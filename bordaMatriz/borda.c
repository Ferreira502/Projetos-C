#include <stdio.h>

#define MAX_SIZE 26

int borderSum(int mat[MAX_SIZE][MAX_SIZE], int n) {
    int sum = 0;

    if (n > 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                    sum += mat[i][j];
                }
            }
        }
    }

    return sum;
}

int main() {
    int size, n;

    scanf("%d %d", &size, &n);

    int mat[MAX_SIZE][MAX_SIZE]; 

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (n > size || n <= 0) {
        printf("0\n");
    } else {
        int result = borderSum(mat, n);

        printf("%d\n", result);
    }

    return 0;
}
