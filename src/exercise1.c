#include <stdio.h>
int main() {
    double num[10];
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        if(scanf("%lf", &num[i]) != 1) {
            printf("Ошибка ввода\n");
            return 1;
        }
        sum += num[i];
    }  
    printf("%.2lf\n", sum / 10);
    return 0;
}