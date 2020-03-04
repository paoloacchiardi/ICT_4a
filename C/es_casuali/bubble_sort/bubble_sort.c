/* BUBBLE SORT */
#include<stdio.h>
#include<stdlib.h>
#define DIM 100
void bubblesort(float v[], int dim);
void scambio(float v[], int k);
int main(){
    float v[DIM];
    int num;
    int k;

    printf("Quanti elementi vuoi che abbia il vettore? ");
    scanf("%d", &num);
    for(k=0;k<num;k++){
        printf("Inserisci l'elemento della cella [%d]: ", k);
        scanf("%f", &v[k]);
    }
    bubblesort(v, num);
    for(k=0;k<num;k++){
        printf("%.2f\n", v[k]);
    }
}

void scambio(float v[], int k){
    float t;
    t = v[k+1];
    v[k+1]= v[k];
    v[k]=t;
}

void bubblesort(float v[], int dim){
    int k;
    int c;
    for(c=1;c<dim;c++){
    for(k=0;k<dim-c;k++){
       if(v[k]>v[k+1]){
        scambio(v, k);
       }
    }
    }
}
