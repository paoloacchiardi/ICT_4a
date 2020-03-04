#include<stdio.h>
#include<stdlib.h>
#define DIM 3
int caricaData(struct Data *st);
void stampa(struct Data st);

typedef struct data{
    int g;
    char m[DIM];
    int anno;
}Data;

int main(){
    Data giorno;
    caricaData(&giorno);
    stampa(&giorno);
}

int caricaData(struct Data *st){
    printf("Inserisci un giorno: ");
    scanf("%d", (*st).g);
    printf("Inserisci un mese: ");
    scanf("%s", (*st).m);
    printf("Inserisci un anno: ");
    scanf("%d", (*st).anno);
}

void stampa(struct Data *st){
    printf("%d %c %d", (*st).g, st.m, st.anno);
}
