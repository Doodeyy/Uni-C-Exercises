#include <stdio.h>
#include <stdlib.h>

int main(){
    int xoritikotita , epitirites , synEpitirites , synXoritikotita , synAithouses = 0;

    printf("Dose xoritikotita aithousas: ");
    scanf("%d" , &xoritikotita);
    do {
        
        if (xoritikotita <= 15){
            epitirites = 1;
        }
        else if (xoritikotita <= 23){
            epitirites = 2;
        }
        else {
            epitirites = 3;
        }

        printf("Apaitounte %d epitirites\n" , epitirites);

        synAithouses++;
        synEpitirites += epitirites;
        synXoritikotita += xoritikotita;

        printf("Dose xoritikotita aithousas: ");
        scanf("%d" , &xoritikotita);

    } while (synXoritikotita < 100);

    printf("Synolo aithouson: %d\n" , synAithouses);
    printf("Synolo epitiriton: %d\n", synEpitirites);
    printf("Synolo xrisimopoiimenon theseon: %d\n" , synXoritikotita);

    return 0;
    }
