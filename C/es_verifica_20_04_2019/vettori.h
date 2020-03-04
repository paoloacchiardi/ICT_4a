/* Author: Acchiardi Paolo
Date: 22/02/2019
Libreria vettori */

#include<time.h>
#include<windows.h>
#include<stdbool.h>
#include<stdio.h>
#include<conio.h>
#define CMAX 3

void letturavettint(int v[], int n){ //caricare vettore intero
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore della posizione %d: ", k);
        scanf("%d", &v[k]); //assegna il valore alla posizione puntata dal vettore
    }
}
void letturavettfloat(float v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore della posizione %d:", k);
        scanf("%f", &v[k]); //assegna il valore alla posizione puntata dal vettore
    }
}
void letturavettboolean(bool v[], int n){ //caricare vettore float
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        printf("Inserisci il valore della posizione %d:", k);
        scanf("%B", &v[k]); //assegna il valore alla posizione puntata dal vettore
    }
}
void inizializzazionevettint(int v[], int n){
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        v[k]=0; //assegna ad ogni posizione del vettore il valore 0 per inizializzarlo
    }
}
void inizializzazionevettfloat(float v[], int n){
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        v[k]=0; //assegna ad ogni posizione del vettore il valore 0 per inizializzarlo
    }
}
void inizializzazionevettboolean(bool v[], int n){
    int k; //posizione del vettore
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        v[k]=0; //assegna ad ogni posizione del vettore il valore 0 per inizializzarlo
    }
}
void visualizzazionevettint(int v[], int n){
        int k; //posizione del vettore
        for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
            printf("La cella [%d] vale %d.\n", k, v[k]); //stampa a video il valofre contenuto nella posizione corrente del vettore
        }
}
void visualizzazionevettfloat(float v[], int n){
        int k; //posizione del vettore
        for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
            printf("%.2f\n", v[k]); //stampa a video il valore contenuto nella posizione corrente del vettore
        }
}
void visualizzazionevettboolean(bool v[], int n){
        int k; //posizione del vettore
        for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
            printf("%B\n", v[k]); //stampa a video il valore contenuto nella posizione corrente del vettore
        }
}
// cerca un numero nel vettore di interi non ordinato e disgiunto
int CercaNonOrdDisgInt(int v[],int n,int x){
    int tro,k;
    tro=-1;
    k=0;
    while((k<n)&&(tro==-1)){
        if(x==v[k]){
            tro=k;
        }else{
            k++;
        }
    }
    return tro;
}

// cerca un numero nel vettore di float non ordinato e disgiunto
float CercaNonOrdDisgFloat(float v[],int n,float x){
    int tro,k;
    tro=-1;
    k=0;
    while((k<n)&&(tro==-1)){
        if(x==v[k]){
            tro=k;
        }else{
            k++;
        }
    }
    return tro;
}

// cerca un numero nel vettore di interi non ordinato e non disgiunto
int CercaNonOrdNonDisgInt(int v[],int n, int x){
     int nx,k;
     nx=0;
     for (k=0;k<n;k++){
            if(x==v[k]){
                printf("\nL'elemento trovato in posizione %d", k);
                nx++;
            }
        }
    return nx;
}

// cerca un numero nel vettore di float non ordinato e non disgiunto
float CercaNonOrdNonDisgFloat(float v[],int n, float x){
     int nx,k;
     nx=0;
     for (k=0;k<n;k++){
            if(x==v[k]){
                printf("\nL'elemento trovato in posizione %d", k);
                nx++;
            }
        }
    return nx;
}

//cerca un numero nel vettore di int ordinato e disgiunto
int CercaOrdDisgInt(int v[],int n,int x){
    int tro,k;
    tro=-1;
    k=0;
    while((k<n)&&(tro==-1)){
        if(x==v[k]){
            tro=k;
        }else{
            if(v[k]>x){
                k=n;
            }else{
                k++;
}
        }
    }
    return tro;
}

//cerca un numero nel vettore di float ordinato e disgiunto
float CercaOrdDisgFloat(float v[],int n,float x){
    int tro,k;
    tro=-1;
    k=0;
    while((k<n)&&(tro==-1)){
        if(x==v[k]){
            tro=k;
        }else{
            if(v[k]>x){
                k=n;
            }else{
                k++;
            }
        }
    }
    return tro;
}

//cerca un numero nel vettore di int ordinato e  non disgiunto
int CercaOrdNonDisgInt(int v[],int n, int x){
    //vettore ordinato a elementi non disgiunti
    int nx,k;
    nx=0;
    k=0;
    while(k<n){
            if(x==v[k]){
                printf("\nL'elemento trovato in posizione %d", k);
                nx++;
                k++;
 }else{
                if(v[k]>x){
                    k=n;//fa uscire dal ciclo
                }else{
                    k++;
                }
            }
    }
    return nx;//numero di occorrenze
}

//cerca un numero nel vettore di float ordinato e  non disgiunto
float CercaOrdNonDisgFloat(float v[],int n, float x){
//vettore ordinato a elementi non disgiunti
    int nx,k;
    nx=0;
    k=0;
    while(k<n){
            if(x==v[k]){
                printf("\nL'elemento trovato in posizione %d", k);
                nx++;
                k++;
            }else{
                if(v[k]>x){
                    k=n;//fa uscire dal ciclo
                }else{
                    k++;
                }
            }
        }
        return nx;//numero di occorrenze
}

//cerca un numero nel vettore di int non ordinato e non disgiunto
int CercaBinariaNonRicorsivaInt(int v[],int n,int x){
    int p,u,m,tro; // indice del... p= primo, u=ultimo, m=medio
 p =0;
    u =n-1;
    tro=-1;
    while((p<=u)&& tro==-1){
            m =(p+u)/2;
        if(v[m]==x){
            tro=m; // valore x trovato alla posizione m
        }else{
            if(v[m]<x){
                p =m+1;
            }else{  // x < v[m
                u =m-1;
            }
        }
    }
    return tro;
}

//cerca un numero nel vettore di flaot non ordinato e non disgiunto
float CercaBinariaNonRicorsivaFloat(float v[],int n,float x){
    int p,u,m,tro; // indice del... p= primo, u=ultimo, m=medio
    p =0;
    u =n-1;
    tro=-1;
    while((p<=u)&& tro==-1){
            m =(p+u)/2;
        if(v[m]==x){
            tro=m; // valore x trovato alla posizione m
        }else{
            if(v[m]<x){
                p =m+1;
            }else{  // x < v[m
                u =m-1;
            }
        }
 }
    return tro;
}

void ScambioFloat(float *x,float *y){
    float t;
    t= *x;
    *x=*y;
    *y=t;
}

void ScambioInt(int *x,int *y){
    int t;
    t= *x;
    *x=*y;
    *y=t;
}

void OrdinaVett(int v[],int n){
    int k,kmin,j;
    for(k=0;k<n-1;k++){
                kmin=k;
    for(j=k+1;j<n;j++){
            if(v[kmin]>v[j])
                kmin=j;
    }
    if(kmin!=k)
            ScambioInt(&v[k],&v[kmin]);
    }  return;
}

void bubbleSort1(int vett[],int n){
    int k, sup;
    for(sup = (n-1); sup>0; sup--){
        for(k=0;k<sup;k++){
            if(vett[k]>vett[k+1]){
                ScambioInt(&vett[k],&vett[k++]);
            }
        }
    }
}

void ValoriCasualiFloat(float v[], int n, int min , int max){ //caricare vettore float
    int k; //posizione del vettore
  srand(time(NULL));
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore
        v[k]= rand() % (max-min+1) + min;
    }
}

void ValoriCasualiInt(int v[], int n, int min , int max){ //caricare vettore float
    int k; //posizione del vettore
  srand(time(NULL));
    for(k=0;k<n;k++){ //ciclo che si ripete per ogni posizione del vettore

        v[k]= rand() % (max-min+1) + min;
    }
}

void visualizzaMat(int mat[][CMAX], int righe, int colonne){
    int x; int y;
    for(x=0;x<righe;x++){
        for(y=0;y<colonne;y++){
            printf("\nValore cella [%d][%d] = %d ",x,y, mat[x][y]);
        }
    }
}

void caricaMat(int mat[][CMAX], int righe,int colonne){
    int x; int y;
    for(y=0;y<colonne;y++){
        for(x=0;x<righe;x++){
            printf("Inserisci il valore della cella [%d][%d]: ",x,y);
            scanf("%d", &mat[x][y]);
        }
    }
}
