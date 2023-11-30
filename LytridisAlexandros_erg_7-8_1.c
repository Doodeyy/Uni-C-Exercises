#include <stdio.h>
#include <stdlib.h>

void fillPin(int pin[] , int n) {
    int i;
    for (i = 0; i < n; i++) {
        pin[i] = rand() % 10 + 1;
    }
}


void showPin(int pin[] , int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", pin[i]);
    }
}

int findThesiMax(int pin[] , int n) {
    int max = pin[0];
    int thesiMax = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (pin[i] > max) {
            max = pin[i];
            thesiMax = i;
        }
    }
    return thesiMax;
}

int findThesiMin(int pin[] , int n) {
    int min = pin[0];
    int thesiMin = 0;
    int i;
    for (i = 1; i < n; i++) {
        if (pin[i] < min) {
            min = pin[i];
            thesiMin = i;
        }
    }
    return thesiMin;
}

int countAvg(int pin[] , int n) {
    int i;
    int sum = 0;
    int count = 0;
    int mo;
    for (i = 0; i < n; i++) {
        sum += pin[i];
    }
    mo = sum / (n + 1);
    
    for (i = 0; i < n; i++) {
        if (pin[i] > mo) {
            count++;
        }
    }
    return count;
}

int main(){
    srand(time(NULL));
    int n , thesiMax, thesiMin;
    
    printf("Give an integer n > 5 : ");
    scanf("%d" , &n);
    while (n <= 5){
        printf("Invalid input. Give an integer n > 5: ");
        scanf("%d" , &n);
    }
    int pin[n];
    fillPin(pin , n);
       
    showPin(pin , n);
    printf("\n");
         
    thesiMax = findThesiMax(pin , n);
    printf("Max = %d thesiMax = %d\n" , pin[thesiMax] , thesiMax);
    
    thesiMin = findThesiMin(pin , n);
    printf("Min = %d thesiMin = %d\n" , pin[thesiMin] , thesiMin);
    
    printf("count avg = %d\n" , countAvg(pin , n));
    
    system("pause");
}
