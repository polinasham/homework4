int main(int argc,char** argv) {
    float num[10];
    scanf("%f %f %f %f %f %f %f %f %f %f", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
    int K = 2;
    
    if (K < 0) {
        K = K + 10;
    }
    float print[10];
    for (int i = 0; i < 10; i++) {
        print[(i + K) % 10] = num[i];
    }

    for (int i = 0; i < 10; i++) {
        printf("%.3f ", print[i]);
    }
    return 0;
}