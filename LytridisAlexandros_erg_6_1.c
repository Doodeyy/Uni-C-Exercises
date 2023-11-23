#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int j;

    printf("Give an integer in [1,10]: ");
    scanf("%d" , &i);

    for (j = 1 ; j <=10 ; j++){
        printf("%d * %d = %d\n" , i , j , i*j);
 
    }

    system("pause");
    return 0;
    
}   