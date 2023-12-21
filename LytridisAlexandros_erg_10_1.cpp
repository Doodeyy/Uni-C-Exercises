#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct ypallhlos {
    char onoma[50];
    int arithmosM;
    int eidosP;
    int hours;
    int misthos;
};

ypallhlos gemismaPedion(char n[] , int arithmosM , int eidosP , int hours, int misthos) {
    struct ypallhlos yp;
    strcpy(yp.onoma , n);
    yp.arithmosM = arithmosM;
    yp.eidosP = eidosP;
    yp.hours = hours;
    yp.misthos = misthos;
    return yp;    
}

void emfanisiPedion(struct ypallhlos yp) {
    printf("%s , %d , %d , %d , %d\n\n" , yp.onoma , yp.arithmosM , yp.eidosP , yp.hours , yp.misthos);
}

int findTMisthos(struct ypallhlos yp) {
    int final , extra;
    int eP = yp.eidosP;
    if (ep == 1) {
        extra = 300;
    }
    else if (ep == 2) {
        extra = 150;
    }
    else if (ep == 3) {
        extra = 100;
    }
    else if (ep == 4) {
        extra = 50;
    }
    else {
        extra = 0;
    }
    
    final = yp.misthos + extra + yp.hours * 20;
    
    return final;
}

int main() {
    
    char onoma[50];
    int arithmosM , eidosP , hours , misthos;
    struct ypallhlos yp1 , yp2;
    yp1 = gemismaPedion("George" , 1234 , 1 , 4 , 800);
    
    emfanisiPedion(yp1);
    
    printf("Ypallhlos 2 info\n\n");
    printf("Give name : ");
    scanf("%s" , &onoma);
    printf("Give AM : ");
    scanf("%d" , &arithmosM);
    printf("Give eidos ptyxiou : ");
    scanf("%d" , &eidosP);
    printf("Give yperwries : ");
    scanf("%d" , &hours);
    printf("Give misthos : ");
    scanf("%d" , &misthos); 
    
    yp2 = gemismaPedion(onoma , arithmosM , eidosP , hours , misthos);
    
    emfanisiPedion(yp2);
    
    system("pause");
}
