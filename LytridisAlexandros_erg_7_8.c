#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillPin(int *p, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 10 + 1;
    }
}

void showPin(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int findThesiMax(int *p, int n) {
    int max = p[0];
    int thesiMax = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
            thesiMax = i;
        }
    }
    return thesiMax;
}

int findThesiMin(int *p, int n) {
    int min = p[0];
    int thesiMin = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] < min) {
            min = p[i];
            thesiMin = i;
        }
    }
    return thesiMin;
}

int countAvg(int *p, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += p[i];
    }
    float avg = (float)sum / n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] > avg) {
            count++;
        }
    }
    return count;
}

int searchPThesiNum(int *p, int n, int num) {
    for (int i = 0; i < n; i++) {
        if (p[i] == num) {
            return i;
        }
    }
    return -1;
}

void bubbleDesc(int *p, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j] < p[j + 1]) {
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int binarysearchPThesiNum(int *p, int start, int end, int num) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (p[mid] == num) {
            return mid;
        }
        if (p[mid] < num) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Give an integer n > 5: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    fillPin(p, n);

    printf("p = ");
    showPin(p, n);

    int thesiMax = findThesiMax(p, n);
    int thesiMin = findThesiMin(p, n);
    printf("max = %d thesiMax = %d\n", p[thesiMax], thesiMax);
    printf("min = %d thesiMin = %d\n", p[thesiMin], thesiMin);

    int count = countAvg(p, n);
    printf("avg = %.6f\n", (float)count / n);
    printf("count avg = %d\n", count);

    int num;
    printf("Give an integer num: ");
    scanf("%d", &num);

    int thesiNum = searchPThesiNum(p, n, num);
    if (thesiNum != -1) {
        printf("Found num = %d in position %d, p[%d] = %d\n", num, thesiNum, thesiNum, p[thesiNum]);
    } else {
        printf("NOT FOUND\n");
    }

    bubbleDesc(p, n);
    printf("p = ");
    showPin(p, n);

    int index = rand() % (n - 1);
    printf("swap p[%d], p[%d]\n", index, index + 1);
    int temp = p[index];
    p[index] = p[index + 1];
    p[index + 1] = temp;

    printf("p = ");
    showPin(p, n);

    free(p);
    return 0;
}
