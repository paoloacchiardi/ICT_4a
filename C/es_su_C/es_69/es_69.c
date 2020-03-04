/* Author: Paolo Acchiardi
Date: 22/12/2018
Es. 069: Dati N numeri determinare il massimo.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    //variabili
    int cont; //numero di numeri
    float num; //numero inserito da tastiera
    float max; //numero con valore massimo
    printf("Inserisci il numero dei numeri: ");
    scanf("%d", &cont);
    while(cont>0){
        printf("Inserisci un numero: ");
        scanf("%f", &num);
        if(cont==0){
            max=num;}
        if(num>max){
            max=num;
        }cont--;
}
printf("Il numero maggiore e' %.3f", max);
}
