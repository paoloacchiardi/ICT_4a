/* Author: Acchiardi Paolo
Date: 18/01/2019
Es.01 */
#include <stdio.h>
#include <stdlib.h>

//prototipi
void asterischi(int x); //disegna una riga di x asterischi

int main(){
    int n, //num. di volte che si disegnano le righe
        x; //num. di asterischi

    do{
        printf("Quanti asterischi? ");
        scanf("%d", &x);
    }while(x<0);
    do{
        printf("Quante volte? ");
        scanf("%d", &n);
    }while(n<0);
    for(k=0;k<n;k++){
        asterischi(x);
        printf("\n");
    }

    //premi tasto per terminare
    system("pause");
    return 0;
}

//disegna una riga di x asterischi
void asterischi(int x){
    int k;
    for(k=0;k<n;k++){
        printf("*");
    }
    return;
    }
