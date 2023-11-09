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
    int weight, destination;
    float charge;

    printf("Enter the weight in grams: ");
    scanf("%d", &weight);

    printf("Enter destination (0 for domestic, 1 for international): ");
    scanf("%d", &destination);

    if (weight <= 500){
        if (destination == 0){
            charge = 2.0;
        }
        else{
            charge = 4.8;
        }
    }
    else if (weight <= 1000){
        if (destination == 0){
            charge = 3.5;
        }
        else{
            charge = 7.2;
        }
    }
    else{
        if (destination == 0){
            charge = 4.6;
        }
        else{
            charge = 11.5;
        }
    }
    printf("Charge: %.2f\n", charge);
    return 0;
}
