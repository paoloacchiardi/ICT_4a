/* Author: Acchiardi Paolo
Date: 07/03/2019
Es.002: Scrivi la funzione eDivisibile che, passati come parametri due numeri interi, restituisce true se il primo numero è divisibile
        per il secondo, false altrimenti. Scrivere anche un main che utilizzi la funzione passando come parametri attuali 13 e 4 e stampi
        a video il messaggio opportuno.*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool eDivisibile(int num1, int num2);

int main(){
    int numero1;
    int numero2;
    bool risultato;

    numero1=13;
    numero2=4;
    risultato = eDivisibile(numero1, numero2);
    if(risultato=='true'){
        printf("Il primo numero e' divisibile per il secondo.");
    }
    else{
        printf("Il primo numero non e' divisibile per il secondo.");
    }
}

bool eDivisibile(int num1, int num2){
    if(num1 % num2 == 0){
        return true;
    }
    else{
        return false;
    }
}
