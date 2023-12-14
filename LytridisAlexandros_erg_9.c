#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define nmax 100

void fillPin2D(int my2DArray[][nmax] , int n){
    int i , j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++){
            my2DArray[i][j] =  rand() % 10 + 1;
        }
    }
}

void showPin2D(int my2DArray[][nmax] , int n){
    int i , j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%3d" , my2DArray[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void findMeanLine(int my2DArray[][nmax] , int n , int avgLine[]) {
    int i , j;
    int sum = 0;
    int mo = 0;
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += my2DArray[i][j];
        }
        mo = sum / n;
        avgLine[i] = mo;
    }
}

void showPinDouble1D(int my1DArray[] , int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%3d" , my1DArray[i]);
    }    
    printf("\n");
    
}

void findMeanCol(int my2DArray[][nmax] , int n , int avgCol[]) {
    int i , j;
    int sum = 0;
    int mo = 0;
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += my2DArray[j][i];
        }
        mo = sum / n;
        avgCol[i] = mo;
    }
}

int findDSum(int my2DArray[][nmax] , int n) {
    int i , j;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += my2DArray[i][i];
        sum += my2DArray[i][n - i - 1];
    }
    /*
    printf("\n");
    int c = 0;
    for (j = n - 1; j >= 0; j--){
        sum += my2DArray[c][j];
        printf("%d " , my2DArray[c][j]);
        c++;
    }
    */
    return sum;
}


int main(){
    int n;
    srand(time(NULL));
    printf("Give n > 5: ");
    scanf("%d" , &n);
    while (n <= 5){
        printf("Give n > 5: ");
        scanf("%d" , &n);
    }
    
    int my2DArray[n][nmax];
    
    fillPin2D(my2DArray , n);
    
    showPin2D(my2DArray , n);
        
    int avgLine[n];
        
    findMeanLine(my2DArray , n , avgLine);
    
    printf("avgLine = ");
    
    showPinDouble1D(avgLine , n);
    
    printf("\n");
    
    int avgCol[n];
    
    findMeanCol(my2DArray , n , avgCol);
    
    printf("avgCol = ");    
    
    showPinDouble1D(avgCol , n);
    
    printf("\n");
    
    int sum;
    
    sum = findDSum(my2DArray , n);
    
    printf("DSum = %d\n" , sum);
    
    system("pause");
}
