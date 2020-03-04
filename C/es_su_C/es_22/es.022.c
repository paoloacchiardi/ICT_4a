/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.020: data la quantità, e il prezzo unitario della merce venduta, lo sconto da applicare in caso la quantità superasse le 100 unità,
lo sconto da applicare in caso contrario e l'IVA: scrivere l'importo da pagare calcolando l'IVA sul prezzo scontato.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //dichiarazione delle variabili
    const int QM = 100;//limite oltre il qualem il cliente ha lo sconto
    int iva; //tassa iva
    int q; //quantita'
    float pu ;//prezzo unitario
    float s1; //sconto se la quantita' supera 100
    float s2; //sconto se la quantita' e' minore di 100
    float st; //prezzo del primo sconto
    float pz; //prezzo scontato senza iva
    float p; //prezzo totale senza sconti
    float i;  //prezzo scontato con iva
    float pf; //prezzo finale


    printf("inserisci la quantita' e il prezzo: ");
    scanf("%i %f" , &q , &pu);
    printf("inserisci lo sconto per chi compra piu' di 100 unita' e chi ne compra di meno: ");
    scanf("%f %f" , &s1 , &s2);
    printf("inserire l'iva: ");
    scanf("%f" , &iva);

    p = q * pu;
    if(p > QM){
        st = (p * s1)/100;
    }else{
        st = (p * s2)/100;
        }
    pz = p - st;
    i = (pz * iva)/100;
    pf = pz + i;
    printf("il prezzo scontato e' %f" , pf);
}
