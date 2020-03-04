/*
Author: Paolo Acchiardi
Date: 22/12/2018
Es. 057: Data una successione di numeri(la successione termina quando si risponde "N" alla domanda "C'è ne ancora?")
         contare i numeri positivi.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //variabili
    float num; //numero in input
    int c; //contatore numeri positivi
    char risp; //risposta alla domanda "C'è ne ancora?"

    risp = 's';

while (risp != 'N'){
        printf("Inserisci un numero: ");
        scanf("%f", &num);
        if (num > 0){ //verifico se il numero è maggiore di 0
        c++;  //incremento il contatore dei numeri positivi
        }
        printf("C'e' ne ancora?(N per terminare): ");
        scanf("%c" , &risp);
}

printf("I numeri positivi sono %d", c);



}
