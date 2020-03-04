/* Author: Acchiardi Paolo
Date: 07/03/2019
Es.001: Data la seguente funzione, scrivere la procedura corrispondente con i parametri opportuni. Scrivere anche un main che
        utilizzi funzione e procedura leggendo da tastiera i parametri attuali.*/

#include<stdio.h>
#include<stdlib.h>

void proc(int *x, char tipo);
float funz(int x, char tipo);

int main(){
    float r;
    int x;
    char tipo;

    printf("Inserisci i 3 parametri attuali: ");
    scanf("%f %d %c", &r, &x, &tipo);
    proc(&x, tipo);
    r= funz(x,tipo);
    printf("r vale %.2f.", r);
}

void proc(int *x, char tipo){
    float f;
    if(tipo=='a')
        f=*x/3.0;
    else f=*x/2.5;
    return f;
}

float funz(int x, char tipo){
    float f;
    if(tipo=='a')
        f=x/3.0;
    else f=x/2.5;
    return f;
}
