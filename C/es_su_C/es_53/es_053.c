/* Author: Acchiardi Paolo
Date: 18/01/2019
Es.053: Dato un voto da 0 a 10 visualizzare:[0..3]SCARPA [4]ASINO [5]POTEVI STUDIARE UN PO' DI PIU' [6]PER UN PELO [7,8]BRAVO [9,10]SUPER. */

#include<stdio.h>
#include<stdlib.h>

int main(){

    //dichiarazione delle variabili
    int voto; //voto

    printf("Inserire un voto intero: ");
    scanf("%d", &voto);
    switch(voto){
    case 0:
    case 1:
    case 2:
    case 3: printf("SCARPA"); break;
    case 4: printf("ASINO"); break;
    case 5: printf("POTEVI STUDIARE UN PO' DI PIU'"); break;
    case 6: printf("PER UN PELO"); break;
    case 7:
    case 8: printf("BRAVO"); break;
    case 9:
    case 10: printf("SUPER"); break;
    default: printf("Non e' un voto intero.");

        }
}
