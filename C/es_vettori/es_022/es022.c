/* Author: Acchiardi Paolo
Date: 21/03/2019
Es. 022: Caricare  in  un  vettore  di  10  elementi  valori  casuali  compresi  tra -30  e  30. Verificare che gli elementi siano
         tutti diversi ovvero che il vettore sia a elementi disgiunti. */

#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"

#define DIM 10

void ControlloElementiDiversiFloat(float vett[], int n);
int main(){
    float A[DIM];
    int k;

    valoricasuali(A, DIM, -30, 30);
    visualizzazzionevettfloat(A, DIM);

}

void ControlloElementiDiversiFloat(float vett[], int n){
    int k;
    for(k=0;k<n;k++){
        if(vett[k]!=vett[k+1]){

        }
        else{

        }
    }
}
