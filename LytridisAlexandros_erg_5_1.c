#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num , count;
    double dynami;

    printf("Give a number between 2 and 10: ");
    scanf("%d", &num);

    while (num < 2 || num > 10){
        printf("Wrong number. Give a number between 2 and 10:");
        scanf("%d", &num);
    }
    
    count = 1;
    dynami = pow(num , count);
    while (dynami < 100){
        dynami = pow(num , count);
        printf("dynamh = %d^%d = %lf\n", num , count , dynami);\
        count++;
    }

    return 0;
}
