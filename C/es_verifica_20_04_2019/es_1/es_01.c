/* Author: Acchiardi Paolo
Date: 20/04/2019
ES.: Crea la funzione eVerificato che, ricevuto come parametro un vettore contenente N numeri, restituisca true solo se tutti gli elementi in posizione PARI sono NEGATIVI
e quelli in posizione DISPARI sono POSITIVI, altrimenti restituisca false (lo 0 si considera POSITIVO e PARI). Non usare il FOR e fare il main che dichiara e inizializza un
vettore di 5 elementi e poi richiama la funzione in modo opportuno. */
#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"
#define DIM 5
bool eVerificato(float vett[], int elementi);
int main(){
    float v[DIM];
    bool test;
    inizializzazionevettfloat(v, DIM);
    letturavettfloat(v, DIM);
    test = eVerificato(v, DIM);
    if(test){
        printf("Gli elementi in posizione pari sono negativi e gli elementi in posizione dispari sono positivi.\n");
    }
    else{
        printf("Gli elementi in posizione pari non sono tutti negativi e/o gli elementi in posizione dispari non sono tutti positivi.\n");
    }
    return (0);
}

bool eVerificato(float vett[], int elementi){
    int k;
    bool value;
    value = true;
    k=0;
    while(k<elementi){
        if(k % 2 == 0){
            if(vett[k]>0 || vett[k]==0){
                value = false;
                return value;
            }
        }
        else{
            if(vett[k]<0){
                value = false;
                return value;
            }
        }
        k++;
    }
    return value;
}
