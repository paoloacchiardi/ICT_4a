/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.038: Dato un numero intero positivo, composto al massimo da quattro cifre, visualizzare in output separatamente la cifra che indica le migliaia,
           le centinaia, le decine e le unità.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //dichiarazioni delle variabili
    const int z = 10;
    int n1; //numero intero positivo
    int u; //unità
    int d; //decine
    int h; //centinaia
    int k; //migliaia

     printf("inserisci un numero intero positivo: ");
     scanf("%i" , &n1);
     u = n1 % z; //calcolo delle unità
     n1 = n1 / z;
     d = n1 % z; //calcolo delle decine
     n1 = n1 / z;
     h = n1 % z; //calcolo delle centinaia
     n1 = n1 / z;
     k = n1 % z; //calcolo delle migliaia
     printf("le unita' sono %i , le decine sono %i , le centinaia sono %i e le migliaia sono %i" , u , d , h , k);










}
