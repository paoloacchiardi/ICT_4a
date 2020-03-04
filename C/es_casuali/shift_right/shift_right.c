/* SHIFT RIGHT */
#include<stdio.h>
#include<stdlib.h>
#define DIM 100

void shift_right(int v[], int dim);

int main(){
    int v[DIM];
    int num;
    int k;
    printf("Quanti valori vuoi inserire nel vettore?\n");
    scanf("%d", &num);
    for(k=0;k<num;k++){
        printf("Inserisci il valore della cella [%d] (solo numeri interi): ", k);
        scanf("%d", &v[k]);
    }
    shift_right(v, num);
    for(k=0;k<num;k++){
        printf("%d\n", v[k]);
    }
}

void shift_right(int v[], int dim){
    int t[dim];
    int k;
    k=0;
    t[k]=v[k];
    v[k]=v[dim-1];
    for(k=1;k<dim;k++){
        t[k]=v[k];
        v[k]=t[k-1];
    }
}
