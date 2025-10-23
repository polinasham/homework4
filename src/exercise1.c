#include <stdio.h>

int main(int argc,char** argv) {
    double num[10];
    double sum = 0;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
    for (int i = 0; i < 10; i++) {
        sum += num[i];
    }
    printf("%.3lf", (sum / (double)10));
    return 0;
}