#include <stdio.h>
#include <stdlib.h>

int main(){
    int xoritikotita = 0;
    int epitirites = 0;
    int synEpitirites = 0;
    int synXoritikotita = 0;
    int synAithouses = 0;

    do {
        printf("Dose xoritikotita aithousas: ");
        scanf("%d" , &xoritikotita);
        
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

    } while (synXoritikotita < 100);

    printf("Synolo aithouson: %d\n" , synAithouses);
    printf("Synolo epitiriton: %d\n", synEpitirites);
    printf("Synolo xrisimopoiimenon theseon: %d\n" , synXoritikotita);

    system("pause");
    return 0;
    }
