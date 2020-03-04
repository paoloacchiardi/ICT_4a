/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.030: Una compagnia telefonica facevale seguenti tariffe orarie: telefonate urbane-200 lire al minuto per i primi 2 minuti; 150 lire per gli altritelefonate interurbane-200 lire alla risposta; 300 lire al minuto per i primi 2 minuti;250 lire per
gli altriIndicato il tipo di telefonata (i=interurbana, u=urbana) e i secondi di conversazione,
 comunicare l’importo da pagare.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //dichiarazione delle variabili
    const int TU200 = 200; //200 lire da pagare alla risposta da chiamate urbane
    const int TU150 = 150; //150 lire da pagare alla risposta da chiamate urbane
    const int TI200 = 200; //200 lire da pagare alla risposta da chiamate interurbane
    const int TI300 = 300; //300 lire da pagare alla risposta da chiamate interurbane
    const int TI250 = 250; //250 lire da pagare alla risposta da chiamate interurbane
    int min; //minuti di chiamata
    char tipo; //tipo di chiamata
    int sec; //secondi di chiamata
    float risposta; //soldi da pagare alla risposta a chiamate interurbane
    float tot; //spesa totale per la chiamata

    printf("inserire il tempo in chiamata in secondi: ");
    scanf("%i" , &sec);
    printf("inserire il tipo di chiamata ('u' = urbana e 'i' = interurbana): ");
    scanf("%ch" , &tipo);
    min = sec/60;
       if (tipo = 'i'){
            risposta = 200;
            if(min > 2){
                tot = (TI300 * 2) + (TI250 * (min - 2));
            }else{
            tot=(TI300 * min + risposta);}
      }else{
            if (min > 2){
                tot = (TU200 * 2) + (TU150 * min);
            }else{
                tot = (TU200 * min);
            }
      }

      printf("La spesa totale e' %f" , tot);















}
