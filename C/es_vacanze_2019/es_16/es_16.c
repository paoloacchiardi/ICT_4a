/* Author: Acchiardi Paolo
Date: 17/09/2019
Es: In un concorso, i partecipanti sono sottoposti a 10 prove. I risultati del concorso  sono  memorizzati  in  un  array  di  strutture,  che  contiene,  per  ogni concorrente,
 i seguenti dati:• nome: stringa contenente al massimo 20 caratteri, compreso il terminatore;• punteggi: una sequenza di 10 interi.
 Si scriva un programma che stampi, per ciascuna prova, chi è il vincitore e con quale punteggio(non ci sono pari merito).
 Ad esempio:
 Rossi 4 6 1...
 Bianchi 12 0 9...
 Verdi 2 3 7...
 Il programma dovrà visualizzare:
 prova 1: Bianchi 12
 prova 2: Rossi 6
 prova 3: Bianchi 9
 Esempio di contenuto dell'array di struct:
 {"Rossi", {4,6,1,2,0,11,0,2,3,3}},
 {"Bianchi", {12,0,9,4,5,2,1,1,0,5}},
 {"Verdi", {2,3,7,9,10,4,5,9,7,2}},
 {"Astolfi", {0,2,6,1,8,5,9,10,6,8}},
 {"Lorenzi", {6,9,7,1,0,0,4,5,5,1}},
 {"Franchi", {1,10,11,19,4,7,2,0,4,7}} */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNG_NOME 20
#define NUM_PUNTEGGI 10
#define NUM_PARTECIPANTI 4

typedef struct con {
    char nome[LUNG_NOME];
    int punteggi[NUM_PUNTEGGI];
} concorrente;

void caricatabella(concorrente vett[], int dim);
void vincitore_e_punteggio(concorrente vett[], int dim);

main() {
    concorrente gara[NUM_PARTECIPANTI];
    caricatabella(gara, NUM_PARTECIPANTI);
    vincitore_e_punteggio(gara, NUM_PARTECIPANTI);
}

void caricatabella(concorrente vett[], int dim) {
    int k,punt;
    FILE *fp;
    fp = fopen("partecipanti.txt", "r");
    if(fp == NULL) {
        printf("\nIl file non esiste.");
    }
    k=0;
    do { //fin qua va
        fscanf(fp,"%s",vett[k].nome);
        for(punt=0; punt<NUM_PUNTEGGI; punt++) {
            fscanf(fp,"%d",vett[k].punteggi[punt]);
        }
        k++;
    } while(k<dim && fscanf(fp,"%s", vett[k].nome)!=EOF);
}

void vincitore_e_punteggio(concorrente vett[], int dim) {
    int num_prova,k,c; //k è la cella che indica il concorrente, c indica il numero del punteggio di cui si sta parlando (numero di prova anche)
    k=0;
    c=0;
    char vincitore[20];
    int punt_max;
    punt_max=vett[k].punteggi[c];
    strcpy(vincitore,vett[k].nome);
    for(num_prova=0; num_prova<NUM_PUNTEGGI; num_prova++) {
        do {
            if(vett[k].punteggi[num_prova]>punt_max) {
                punt_max = vett[k].punteggi[num_prova];
                strcpy(vincitore,vett[k].nome);
            }
            k++;
        } while(k<dim);
        printf("\nprova %d: %s %d", num_prova+1, vincitore, punt_max);
        strcpy(vincitore,vett[0].nome);
        punt_max=vett[0].punteggi[num_prova+1];
    }
}
