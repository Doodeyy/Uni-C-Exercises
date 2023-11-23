
#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int i;
    int j;
    
    printf("Give an integer in [1, 10]: ");
    scanf("%d" , &i);
    
    while ( i < 1 || i > 10){
        printf("Invalid input. Give an integer in [1, 10]: ");
        scanf("%d" , &i);
        }
        
    for (j = 1 ; j <= 10 ; j++){
        printf("%dx%d=%d  " , i , j , i*j);
        }
        
    system("pause");
}
