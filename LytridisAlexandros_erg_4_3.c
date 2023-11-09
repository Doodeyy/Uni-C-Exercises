/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : T11
ERGASTHRIAKH ASKHSH : 4
HMEROMHNIA : 9/11/2023
ONOMA : LYTRIDIS ALEXANDROS
ARITHMOS MHTRWOY : 2023195
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char op;
    int a , b;
    
    printf("Dose integer a: ");
    scanf("%d" , &a);
    printf("Dose integer b: ");
    scanf("%d" , &b);
    printf("Give operator: ");
    while((getchar())!='\n');
    scanf("%c" , &op);
    
    switch(op){
        case '+': printf("a + b = %d\n" , a + b);
                break;
                
        case '-': printf("a - b = %d\n" , a - b);
                break;
                    
        case '*': printf("a * b = %d\n" , a * b);
                break;
                
        case '/': if (b == 0){
                    printf("Adunato\n");
                }
                else{
                    printf("a / b = %f\n" , (float)a / b);                
                } 
                break;
                
        default: printf("Mh apodekth praksi\n");
    }
    system("pause");
    
}


