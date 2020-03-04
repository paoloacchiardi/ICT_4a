#include<stdio.h>
#include<stdlib.h>
#include "../vettori.h"
#define DIM 5

int OrdDis(float v[], int n, int x);

int main(){
    float v[DIM];
    int k;
    int pos;
    int num;

    k=0;
    srand(time(NULL));
    do{
    v[k]= rand() % 100 + 1;
    }while(v[k]>(100+1-DIM));
    for(k=1;k<DIM;k++){
       do{
        v[k]= rand() % 100 + 1;
        }while(v[k]<v[k-1] || v[k]==v[k-1]);
    }
    printf("Inserire il valore che si vuole cercare (max=100, min= 1): ");
    scanf("%d", &num);
    visualizzazzionevettfloat(v, DIM);
    pos= OrdDis(v, DIM, num);
    if(pos!=-1){
        printf("Il valore %d si trova nella posizione %d.", num, pos);
    }
    else{
        printf("Il valore %d non e' presente nel vettore.", num);
    }
}

int OrdDis(float v[], int n, int x){
    int k;
    int tro;
    k=0;
    tro=-1;
    do{
        if(v[k]==x){
            tro=k;
        }
        else{
            if(v[k]>x){
                k=n;
            }
            else{
            k++;
            }
        }
    }while(tro==-1 && k<n);
    return tro;
}

