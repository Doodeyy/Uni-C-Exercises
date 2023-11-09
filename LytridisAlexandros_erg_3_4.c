/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Τ11
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 9/11/2023
ONOMA : LYTRIDIS ALEXANDROS
ARITHMOS MHTRWOY : 2023195
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int grade1, grade2, grade3, final_grade;
    printf("Enter grade of first grader: ");
    scanf("%d", &grade1);
    printf("Enter grade of second grader: ");
    scanf("%d", &grade2);
    if (abs(grade1 - grade2) < 20) {
        final_grade = (grade1 + grade2) / 2;
    } else {
        printf("Enter grade of third grader: ");
        scanf("%d", &grade3);
        final_grade = (grade1 + grade2 + grade3) / 3;
    }
    printf("Final grade: %d/100", final_grade);
    return 0;
}
 
