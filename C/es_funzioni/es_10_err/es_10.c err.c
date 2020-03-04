/* Author: Acchiardi Paolo
Date: 08/02/2019
Es. 10: Scrivere  il  programma  per calcolare  l'ipotenusa,  il  perimetro  e  l'area  di  un triangolo rettangolo dopo aver acquisito
        da tastiera le misure dei due cateti, usando prima le funzioni e poi una sola procedura. Calcola che restituisce i dati richiesti. */

#include<stdio.h>
#include<stdlib.h>

float ipo(int *lato1, int *lato2);
float perimetro(float *mis1,float *mis2,float *mis3);
float area(int *base, int *altezza);
void soluzione (ipo(*cateto1,*cateto2), perimetro(*cateto1, *cateto2, *ipotenusa), area(*cateto1, *cateto2));
main(){
    //dichiarazione delle variabili
    int cateto1;
    int cateto2;
    float ipotenusa;
    float p; //perimetro
    float a; //area
    do{ printf("Inserisci la misura dei due cateti (numeri interi): ");
        scanf("%d %d", &cateto1, &cateto2);
    }while(cateto1 < 0 || cateto1 == 0 || cateto2 < 0 || cateto2 == 0);
    soluzione(ipo(*cateto1,*cateto2), perimetro(*cateto1, *cateto2, *ipotenusa), area(*cateto1, *cateto2));
}

float ipo(int *lato1, int *lato2){
    float ipotenusa;
    ipotenusa = lato1 + lato2;
    return ipotenusa;
}

float perimetro(float *mis1,float *mis2,float *mis3){
    float perim; //perimetro
    perim = mis1 + mis2 + mis3;
    return perim;
}

float area(int *base, int *altezza){
    float arearettangolo;
    arearettangolo = (base * altezza) / 2;
    return arearettangolo;
}

soluzione (ipo(*cateto1,*cateto2), perimetro(*cateto1, *cateto2, *ipotenusa), area(*cateto1, *cateto2)){
    printf("L'ipotenusa vale %f, il perimetro vale %f, l'area vale %f", ipo(cateto1,cateto2), perimetro(cateto1, cateto2, ipotenusa),
           area(cateto1, cateto2));
           return;
}
