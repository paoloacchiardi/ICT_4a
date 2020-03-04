/* Author: Acchiardi Paolo
Date: 18/01/2019
Es.003: Definire una procedura che disegni una riga dello stesso carattere ricevuto come parametro e richiamarla n volte nel p.p.*/

#include<stdio.h>
#include<stdlib.h>
#define LUNGHEZZA_SCHERMO 120

void riga (char carattere); //disegna una riga di car

int main(){

    //dichiarazione delle variabili

    char car; //carattere
    int n; //numero di righe
    int k; //contatore

    printf("Inserisci il carattere da stampare: ");
    scanf("%c", &car);
   do{ printf("Inserisci il numero di righe: ");
    scanf("%d", &n);
   }while(n<0);
    for(k=0;k<n;k++){
        riga(car);
        printf("\n");
    }
    system("pause");
    return 0;
}

void riga(char carattere){  //definizione della funzione
    int c; //contatore
    for(c=0;c<LUNGHEZZA_SCHERMO;c++){
        printf("%c",carattere);
    }
    return;
}
