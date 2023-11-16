#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a , tet;
    int pos = 0;
    int neg = 0;
    int diast = 0;

    printf("Give a number: ");
    scanf("%d" , &a);

    do{ 
        if (a % 2 == 0){
            tet = pow(a , 2);
            printf("%d sto tetragono: %d\n" , a , tet);
        }
        if (a >= 0){
            pos++;
        }
        else{
            neg++;
        }

        if (a > 100 || a < 200){
            diast++;
        }

        printf("Give a number: ");
        scanf("%d" , &a);
        
    } while(a < 15 || a > 25);

    printf("Positives: %d\n Negatives: %d\n Numbers between 100 and 200: %d\n", pos , neg , diast);

    return 0;
}