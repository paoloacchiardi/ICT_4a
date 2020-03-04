/*
Author: Paolo Acchiardi
Date: 22/10/2018
Es. n.011: Dato il raggio calcolare la circonferenza e l'area del cerchio
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

const float PIGRECO = 3.14; //costante, pigreco
float raggio;               //raggio del cerchio
float circonferenza;        //circonferenza del cerchio
float area;                 //area del cerchio

//calcolo

printf("inserire il raggio del cerchio: ");
scanf("%f" , &raggio);

circonferenza = 2 * PIGRECO * raggio;
area = PIGRECO * (raggio * raggio);

printf("L'area del cerchio e' %.2f mentre la circonferenza e' %.2f" , area , circonferenza);

}
