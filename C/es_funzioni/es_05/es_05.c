/* Author: Acchiardi Paolo
Date: 25/01/2019
Es.005: Scrivere la funzione che restituisca l'età di una persona conoscendo il suo anno di nascita (si consideri l'anno attuale come costante) */
#include<stdlib.h>
#include<stdio.h>
#define ANNO_ATTUALE 2019

int eta(int anno_nascita){
    int anni; //anni che ha ora
    anni = ANNO_ATTUALE - anno_nascita;
    return anni;
    }
main(){
    int nascita; //anno di nascita
    int anni_ora; //anni del soggetto ora
    printf("In che anno sei nato?: ");
    scanf("%d", &nascita);
    anni_ora = eta(nascita);
    printf("Hai %d anni. \n", anni_ora);
    system ("pause");
    }
