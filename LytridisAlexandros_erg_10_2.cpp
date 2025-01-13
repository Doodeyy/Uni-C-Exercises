#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ypallhlos{
    char name[50];
    int am;
    int ptuxio;
    int wres;
    int vasikos;
    int tM;
};

ypallhlos gemismaPedion(char n[], int am, int ptuxio, int wres, int vasikos){
 
 struct ypallhlos yp;
 strcpy(yp.name, n);
 yp.am = am;
 yp.ptuxio = ptuxio;
 yp.wres = wres;
 yp.vasikos = vasikos;

 return yp;
}


int returnTMisthos(struct ypallhlos yp){
    int tm,extra;
    int epidoma = yp.ptuxio;
    switch(epidoma) {
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
    tm = yp.vasikos + yp.wres*20 + extra;
    return tm;
}

void setTMAll(struct ypallhlos yp[], int n){
    for (int i=0; i<=n-1; i++){
        yp[i].tM = returnTMisthos(yp[i]);
    }
}


void emfanishPedion(struct ypallhlos yp){
    printf("name = %s\n", yp.name);
    printf("AM = %d\n", yp.am);
    printf("eidos ptuxiou = %d\n", yp.ptuxio);
    printf("wres uperwrias = %d\n", yp.wres);
    printf("vasikos misthos = %d\n", yp.vasikos);
    printf("telikos misthos = %d\n", yp.tM);
}

void swapYpiYpi1(struct ypallhlos yp[], int i, int j ){
    struct ypallhlos temp;
    temp=yp[i];
    yp[i]=yp[j];
    yp[j]=temp;
}

int returnThesiMax(struct ypallhlos yp[], int n ){
    int misthosMax=yp[0].vasikos;
    int thesiMax=0;
    for(int i=1; i<=n-1; i++){
        if ( yp[i].vasikos > misthosMax ){{
            misthosMax=yp[i].vasikos;
            thesiMax=i;
        }}
    }
    return thesiMax;
}

main(){
    char name[50];
    int am, ptuxio, wres, vasikos;
    int n;
    do{
        printf("Give n <= 50: ");
        scanf("%d", &n);
    }while (n>50);

    struct ypallhlos yp[n];

    for (int i=0;i<=n-1;i++)
    {
    printf("Give name of ypallhlos yp[%d] : ", i);
    scanf("%s", name);
    printf("Give am of ypallhlos yp[%d] : ", i);
    scanf("%d", &am);
    do{
        printf("Give ptuxio of ypallhlos(1-7) yp[%d] : ", i);
        scanf("%d", &ptuxio);
    }while(ptuxio<0 || ptuxio>8);
    printf("Give uperwries of ypallhlos yp[%d] : ", i);
    scanf("%d", &wres);
    printf("Give vasikos misthos of ypallhlos yp[%d] : ", i);
    scanf("%d", &vasikos);
    yp[i] = gemismaPedion(name,am,ptuxio,wres,vasikos);
    }

    setTMAll(yp, n);

    for (int i=0;i<=n-1;i++){
        printf("ypallhlos %d :\n", i);
        emfanishPedion(yp[i]);
    }

    int index = rand() % (n-2);

    swapYpiYpi1(yp, index, index+1);

    for (int i=0;i<=n-1;i++){
        printf("ypallhlos %d :\n", i);
        emfanishPedion(yp[i]);
    }

    int tmax=returnThesiMax(yp, n);
    printf("ypallhlos with msthos max:\n");
    emfanishPedion(yp[tmax]);
}
