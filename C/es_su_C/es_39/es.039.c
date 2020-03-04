/*
Author: Paolo Acchiardi
Date: 14/11/2018
Es. n.039: Pierino va a fare la spesa e spende una determinata cifra in € (richiesta in input); Pierino possiede 35 monete da 10 centesimi di €.
           Scrivere programma che determini se Pierino è in grado di pagare la spesa e quante monete deve dare al venditore.
*/

#include <stdio.h>
#include <stdlib.h>

main(){

    //dichiarazione delle variabili
    const int TOTSC = 350; //centesimi posseduti da Pierino
    float se; //spesa in euro
    int sc; //spesa in centesimi
    int monete; //monete da dare al venditore

    printf("Inserisci la spesa in euro: ");
    scanf("%f" , &se);

    sc = se * 100; //spesa in centesimi

    if (sc <= TOTSC){
        monete = sc / 10;
        if (sc % 10 > 0){
            monete = monete + 1;
        }
        printf("Pierino deve dare %i monete al venditore." , monete);
            }
            else {
                printf("Pierino non e' in grado di pagare la spesa.");
            }
}
