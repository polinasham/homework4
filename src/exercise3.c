#include <stdio.h>
int main() {
    float num[10];
    int K;
    printf("Введите 10 чисел:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }
    printf("Введите значение K:\n");
    scanf("%d", &K);
    if (K < 0) {
        K += 10;  
    }
    float print[10];
    for (int i = 0; i < 10; i++) {
        print[(i + K) % 10] = num[i];
    }
    printf("Результат циклического сдвига:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.3f ", print[i]);
    }
    printf("\n");
    return 0;
}