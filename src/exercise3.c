#include <stdio.h>
#include <stdlib.h>

int main() {
    float arr[10];
    int K;

    for (int i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }
    scanf("%d", &K);

    int shift = K % 10; 
    if (shift < 0) {
        shift += 10; 
    }

    float shifted[10];

    for (int i = 0; i < 10; i++) {
        shifted[(i + shift) % 10] = arr[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%.2f ", shifted[i]);
    }
    printf("\n");

    return 0;
}