/* Author: Acchiardi Paolo
Date: 27/01/2019
Es.008: Scrivere una funzione che abbia come parametri il numero dei valori e la loro somma e che calcoli la media aritmetica.*/

#include<stdio.h>
#include<stdlib.h>

float MEDIA(int numvalori, float somma){
    return(somma/numvalori);
    }

int main(){
    int numero_valori;
    float valore;
    float totale;
    char risp;
    float mediatot;

    numero_valori = 0;
    totale = 0;
    do{
    printf("Inserisci un valore: ");
    scanf("%f", &valore);
    numero_valori ++;
    totale = totale + valore;
    printf("Ce ne sono altri? (S/N)");
    scanf("%c", &risp);
    } while(risp == 'S');

    mediatot = MEDIA(numero_valori,totale);
    printf("La media dei valori e' %.2f", mediatot);

    }
