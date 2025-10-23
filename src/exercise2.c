#include <stdio.h>
int main() {
    float num[10];
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }
    for (int i = 9; i >= 0; i--) {
        printf("%f ", num[i]);
    }
    printf("\n");
    return 0;
}