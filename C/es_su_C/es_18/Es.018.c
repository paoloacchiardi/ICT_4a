/*
Author: Paolo Acchiardi
Date: 25/10/2018
Es. n.018: Data l'età di due persone non coetanee, comunicare le età in ordine crescente.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

int eta1; //età  della prima persona
int eta2; //età della seconda persona

//calcolo

printf("Inserisci le due eta': ");
scanf("%d %d" , &eta1 , &eta2);
if (eta1 > eta2) {
    printf("L'eta' in ordine crescente sono %d , %d" , eta2 , eta1);
} else {
    printf("L'eta' in ordine crescente sono %d , %d" , eta1 , eta2);
}
}
