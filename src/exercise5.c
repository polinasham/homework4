#include <stdio.h>
int main() {
    int A[10][3];
    int B[3][10];
    int C[10][10] = {0};
    printf("Введите элементы матрицы A (10x3):\n");
    for (int i = 0; i < 10; i++) {
        printf("Строка %d: ", i+1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Введите элементы матрицы B (3x10):\n");
    for (int i = 0; i < 3; i++) {
        printf("Строка %d: ", i+1);
        for (int j = 0; j < 10; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", C[i][j]);
        }
    }
    printf("\n");
    return 0;
}