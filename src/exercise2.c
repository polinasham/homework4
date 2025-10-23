#include <stdio.h>

int main(int argc,char** argv) {
    float num[10];
    scanf("%f %f %f %f %f %f %f %f %f %f", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8], &num[9]);
   for( int i = 9;i>=0;i--){
    printf("%f ",num[i]);
   }
    
    return 0;
}