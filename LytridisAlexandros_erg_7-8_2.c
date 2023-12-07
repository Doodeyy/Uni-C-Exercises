#include <stdio.h>
#include <stdlib.h>

/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : т11
ERGASTHRIAKH ASKHSH : 8
HMEROMHNIA : 7/12/2023
ONOMA : кутяидгс акенамдяос
ARITHMOS MHTRWOY : 2023195
*/

void fillPin(int pin[] , int n) {
    int i;
    for (i = 0; i < n; i++) {
        pin[i] = rand() % 10 + 1;
    }
}


void showPin(int pin[] , int n) {
    int i;
    printf("p = ");
    for (i = 0; i < n; i++) {
        printf("%d ", pin[i]);
    }
    printf("\n");
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
    int i, mo;
    int sum = 0;
    int count = 0;
    for (i = 0; i < n; i++) {
        sum += pin[i];
    }

    mo = sum / (n);
    
    for (i = 0; i < n; i++) {
        if (pin[i] > mo) {
            count++;
        }
    }
    return count;
}

int searchPThesiNum(int pin[] , int n , int num) {
    int i;
    int found = -1;
    for (i = 0; i < n; i++) {
        if (pin[i] == num) {
            found = i;
            break;
        }
    }
    return found;
}

void swapPin(int pin[] , int index) {
    int temp;
    temp = pin[index];
    pin[index] = pin[index + 1];
    pin[index + 1] = temp;
}

void bubbleDesc(int pin[] , int n) {
    int i , j , temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (pin[j] < pin[j + 1]){
                /*
                temp = pin[j];
                pin[j] = pin[j + 1];
                pin[j + 1] = temp;
                */
                swapPin(pin , j);
            }
        }
    }
}

int binarySearchPThesiNum(int pin[] , int n , int num) {
    int found = -1;
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end && found == -1) {
        mid = (start + end) / 2;
        if (pin[mid] == num) {
            found = mid;
        }
        else if (pin[mid] > num) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return found;
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
         
    thesiMax = findThesiMax(pin , n);
    printf("Max = %d thesiMax = %d\n" , pin[thesiMax] , thesiMax);
    
    thesiMin = findThesiMin(pin , n);
    printf("Min = %d thesiMin = %d\n" , pin[thesiMin] , thesiMin);
    
    printf("count avg = %d\n" , countAvg(pin , n));
        
    int num;
    printf("Give an integer num : ");
    scanf("%d" , &num);
    
    int thesiNum = searchPThesiNum(pin , n , num);
    if (thesiNum == -1) {
        printf("NOT FOUND\n");
    } 
    else {
        printf("Found num = %d in position %d, p[%d] = %d\n" , num ,  thesiNum , thesiNum , pin[thesiNum]);
    }
        
    printf("Descending order\n");
    bubbleDesc(pin , n);
    
    showPin(pin , n);
    
    printf("Give an integer num : ");
    scanf("%d" , &num);
    
    int thesiNum2 = binarySearchPThesiNum(pin , n , num);
    if (thesiNum2 == -1) {
        printf("NOT FOUND\n");
    } 
    else {
        printf("Found num = %d in position %d, p[%d] = %d\n" , num ,  thesiNum2 , thesiNum2 , pin[thesiNum2]);
    }
    
    int index;
    index = rand() % (n - 2);
    printf("Random index = %d\n" , index);
    printf("swap p[%d], p[%d]\n" , index , index + 1);
    
    swapPin(pin , index);
    
    showPin(pin , n);

    system("pause");
    return 0;
}
