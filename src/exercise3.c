#include <stdio.h>

int main() {
    float num[10];
    int K;
    scanf("%d", &K); 

    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    if (K < 0) {
        K += 10;
    }

    float shifted[10];
    for (int i = 0; i < 10; i++) {
        shifted[(i + K) % 10] = num[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (shifted[i] < shifted[j]) {
                float temp = shifted[i];
                shifted[i] = shifted[j];
                shifted[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%.2f ", shifted[i]);
    }
    printf("\n");
    return 0;
}