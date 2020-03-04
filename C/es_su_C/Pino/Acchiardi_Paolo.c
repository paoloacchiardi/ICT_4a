/* Author: Acchiardi Paolo
Date: 16/01/2019
Es.: pino. */

#include<stdio.h>
#include<stdlib.h>
#include "../funzioni.h"

int main(){
    const int LARG = 80; //larghezza schermo
    const char PALLINA = '0'; //pallina
    const char FOGLIA = '*'; //foglia
    const char TRONCO = '|'; //tronco
    int k; //contatore foglie
    int n; //numero foglie in quella riga
    int nriga; //numero riga
    int h; //altezza pino
    int x; //x foglia
    int y; //y foglia

    x = LARG/2;
    y = 1;

    printf("Inserisci l'altezza del pino (da 5 a 20): ");
    scanf("%d", &h);
    for(nriga=1;nriga<=h;nriga++){
        gotoxy(x,y);
        if(nriga % 2==0){
            for(k=0;k<(2*nriga)-1;k++){
            printf("%c", PALLINA);
        } }
        else{
            for(k=0;k<(2*nriga)-1;k++){
            printf("%c", FOGLIA);
        }
    }
    printf("\n");
    x--;
    y++;
    }
    //tronco
    x = LARG/2;
    gotoxy(x,y);
    printf("%c", TRONCO);
}
