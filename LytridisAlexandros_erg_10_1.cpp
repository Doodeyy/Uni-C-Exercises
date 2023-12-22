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
    printf("Onoma : %s\n" , yp.onoma);
    printf("AM : %d\n" , yp.arithmosM);
    printf("Eidos ptyxiou : %d\n" , yp.eidosP);
    printf("Yperwries : %d\n" , yp.hours);
    printf("Vasikos Misthos : %d\n\n" , yp.misthos);
}

void findTMisthos(struct ypallhlos yp) {
    int final , extra;
    int eP = yp.eidosP;
   switch(eP) {
         case 1:
                extra = 300;
                break;
         case 2:
                extra = 150;
                break;
         case 3:
                extra = 100;
                break;
         case 4:
                extra = 50;
                break;
         default:
                extra = 0;
                break;
   }
    final = yp.misthos + extra + yp.hours * 20;

    printf("%d\n\n" , final);  
}

int returnTMisthos(struct ypallhlos yp) {
    int final , extra;
    int eP = yp.eidosP;
    switch(eP) {
         case 1:
                extra = 300;
                break;
         case 2:
                extra = 150;
                break;
         case 3:
                extra = 100;
                break;
         case 4:
                extra = 50;
                break;
         default:
                extra = 0;
                break;
    }
    final = yp.misthos + extra + yp.hours * 20;

    return final;
}

void findMaxTM(struct ypallhlos yp1 , struct ypallhlos yp2) {
    int telikos1 = returnTMisthos(yp1);
    int telikos2 = returnTMisthos(yp2);
    if (telikos1 > telikos2) {
        printf("TM ypallhlou 1 = %d > TM ypallhlou 2 = %d\n\n" , telikos1 , telikos2);
    }
    else {
        printf("TM ypallhlou 2 = %d > TM ypallhlou 1 = %d\n\n" , telikos2 , telikos1);
    }

}

void swapYp1Yp2(struct ypallhlos *yp1 , struct ypallhlos *yp2) {
    struct ypallhlos temp;
    temp = *yp1;
    *yp1 = *yp2;
    *yp2 = temp;
}

int main() {
    
    char onoma[50];
    int arithmosM , eidosP , hours , misthos;
    struct ypallhlos yp1 , yp2;
    yp1 = gemismaPedion("George" , 1234 , 1 , 4 , 800);
    
    emfanisiPedion(yp1);

    printf("Telikos misthos ypallhlou 1 : ");
    findTMisthos(yp1);
    
    printf("Ypallhlos 2 info\n\n");
    printf("Give name : ");
    scanf("%s" , &onoma);
    printf("Give AM : ");
    scanf("%d" , &arithmosM);
    printf("Give eidos ptyxiou(1-7) : ");
    scanf("%d" , &eidosP);
    while (eidosP < 1 || eidosP > 7) {
        printf("Give eidos ptyxiou(1-7) : ");
        scanf("%d" , &eidosP);
    }
    printf("Give yperwries : ");
    scanf("%d" , &hours);
    printf("Give misthos : ");
    scanf("%d" , &misthos); 
    
    yp2 = gemismaPedion(onoma , arithmosM , eidosP , hours , misthos);
    
    emfanisiPedion(yp2);

    printf("Telikos misthos ypallhlou 2 : %d\n\n" , returnTMisthos(yp2));

    findMaxTM(yp1 , yp2);

    swapYp1Yp2(&yp1 , &yp2);

    printf("Ypallhlos 1 after swap\n\n");

    emfanisiPedion(yp1);

    printf("Ypallhlos 2 after swap\n\n");

    emfanisiPedion(yp2);    

    swapYp1Yp2(&yp1 , &yp2);

    printf("Ypallhlos 1 after swap\n\n");

    emfanisiPedion(yp1);

    printf("Ypallhlos 2 after swap\n\n");

    emfanisiPedion(yp2);


    system("pause");
}
