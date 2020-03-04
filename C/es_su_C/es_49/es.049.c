/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.049: In bicicletta impiego X ore ed Y minuti a percorrere K chilometri. Se ho fatto più dei 40 all'ora, voglio che il programma mi dica
           "bravo", se ho fatto meno di 20 mi dica "sei scarso", altrimenti mi dica "va bene".
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //dichiarazione delle variabili
    const int V2 = 40; //velocità 40 km/h
    const int V1 = 20; //velocità 20 km/h
    const int H = 60; //minuti presente in un'ora
    int o; //ore impiegate
    int m; //minuti (es. 5h 25min , m = 25)
    float km; //km percorsi
    float v; //velocità km/h
    float o2; //quanto vale m trasformato in ore

    printf("Inserire le ore, i minuti e i chilometri percorsi: ");
    scanf("%i %i %f" , &o , &m , &km);

    o2 = m / H; //calcolo del valore di m trasformato in ore
    o = o + o2; //calcolo delle ore totali contando anche i minuti trasformati in ore
    v = km / o; //calcolo velocità in km/h

    if (v > V2){
        printf("Bravo.");
    }
    else {
        if (v < V1){
            printf("Sei scarso.");
        }
        else {
            printf("Va bene.");
        }
    }

}
