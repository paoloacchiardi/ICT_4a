#include<stdlib.h>
#include<stdio.h>
#define DIM 100

void visualizzazzionevettint(int v[], int n);
void cancella(int vett[], int n, int x);

int main(){
    int A[DIM];
    int B[DIM];
    int C[DIM];
    int a;
    int b;
    int c;
    int d;
    int mina,minb;

    printf("Inserisci il numero di elementi nel vettore A: ");
    scanf("%d", &a);
    for(d=0;d<a;d++){
            printf("Inserisci il valore della cella %d: (solo valori interi): ", d);
            scanf("%d", &A[d]);
    }
    printf("Inserisci il numero di elementi nel vettore B: ");
    scanf("%d", &b);
    for(d=0;d<b;d++){
            printf("Inserisci il valore della cella %d: (il vettore dev'essere in ordine crescente con valori interi): ", d);
            scanf("%d", &B[d]);
    }
    c= a + b;
    for(d=0;d<c;d++){
       mina = minore(A, a);
       minb = minore(B, b);
       if(mina<minb){
        C[d] = mina;
        cancella(A, a, mina);
       }
       else{
        C[d] = minb;
        cancella(B, b, minb);
       }
    }
    visualizzazzionevettint(C, c);
}

int minore(int vett[], int n){
    int k;
    int kmin;
    int min;
    k=0;
    min = vett[k];
    kmin = k;
    for(k=1;k<n;k++){
         if(vett[k]<min){
            min = vett[k];
            kmin = k;
         }
    }
    return min;
}

void visualizzazzionevettint(int v[], int n){
        int k; //posizione del vettore
        for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
            printf("La cella [%d] vale %d.\n",k, v[k]); //stampa a video il valofre contenuto nella posizione corrente del vettore
        }
}

void cancella(int vett[], int n, int x){
    int k;
    for(k=0;k<n;k++){
        if(vett[k]==x){
            vett[k]=999999;
            break;
        }
    }
}
