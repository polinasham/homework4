#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  

    float num[10];
    for (int i = 0; i < 10; i++) {
        scanf("%f", &num[i]);
    }

    float value = atof(argv[1]);
    int index = atoi(argv[2]);
    

    float print[10];

   
    for (int i = 9; i > index; i--) {
        print[i] = num[i - 1];
    }

   
    print[index] = value;

   
    for (int i = 0; i < index; i++) {
        print[i] = num[i];
    }

    
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", print[i]);
    }
    printf("\n");

    return 0;
}