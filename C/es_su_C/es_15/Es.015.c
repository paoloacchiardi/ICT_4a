/*
Author: Paolo Acchiardi
Date: 22/10/2018
Es. n.015: Un certo giorno dell'anno nella 4a B sono presenti x allievi su y. Determinare la percentuale degli assenti.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

int x;             //alunni presenti
float y;             //alunni della classe
float assenti;     //percentuale alunni assenti
float perc_assenti;
//calcolo

printf("Inserire il numero di allievi presenti e il numero di allievi della classe: ");
scanf("%i %f" , &x , &y);

assenti = ( y - x);
perc_assenti = assenti * 100 / y;
printf("La percentuale di alunni assenti e' pari a %f" , assenti);
}
