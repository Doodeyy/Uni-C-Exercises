#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num , count;
    double dynami;

    do {
        printf("Enter a number between 2 and 10: ");
        scanf("%d", &num);
    } while (num < 2 || num > 10);
    

    count = 1;
    dynami = pow(num , count);
    do {
        dynami = pow(num , count);
        printf("dynamh = %d^%d = %lf\n", num , count , dynami);\
        count++;
    } while (dynami < 100);

    return 0;
}
