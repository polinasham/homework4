#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    float num[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }
    float X = atof(argv[1]);
    int K = atoi(argv[2]);
    if (K < 0 || K > 9) {
        printf("Значение K должно быть от 0 до 9\n");
        return 1;
    }
    for (int i = 9; i > K; i--) {
        num[i] = num[i - 1];
    }
    num[K] = X;
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", num[i]);
    }
    printf("\n");
    return 0;
}