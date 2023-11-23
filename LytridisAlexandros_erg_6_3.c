#include <stdio.h>
#include <stdlib.h>

int findAthroismaPeritton(int i ,int n){
    int sum = 0;
    for (i = 1; i<= 2 * n - 1; i += 2){
    sum+=i;  
    }
    
    return sum;
}

int main() {
    
    int n , i , sum = 0;

    printf("Give an integer in [5,20]: ");
    scanf("%d", &n);

    while (n < 5 || n > 20) {
        printf("Invalid input. Please give an integer in [5,20]: ");
        scanf("%d", &n);
        }

    int square = n*n;

    printf("1+3+5+...+(2*%d-1) = %d = %d^2 = %d\n" , n , findAthroismaPeritton(i , n) , n , square);

    system("pause");
    
    return 0;
}
