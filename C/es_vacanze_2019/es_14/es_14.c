/* Author: Acchiardi Paolo
Date: 16/09/2019
Es.14: Utilizzando  le  tabelle  creare  una  RUBRICA  con  la  seguente  struttura "Contatto":
Cognome,nome,Sesso (M o F),Indirizzo,Telefono,Età.
Applicare il seguente menù:
   0 -esci
   1 -Inserisci nuovo elemento con caricamento ordinato per cognome (ricerca posizione)
   2 -Cerca elemento X
   3 -Visualizza tutto
   4 -Statistiche: età media dei maschi e delle femmine
   5 -Modifica dati elemento X
   6 -Incrementa l'età d’ogni elemento di 1 (nuovo anno) */

 #include<stdio.h>
 #include<stdlib.h>
 #define L_COGNOME 20
 #define L_NOME 20
 #define L_INDIRIZZO 30
 #define NUM_CONTATTI 5

typedef struct cont{
    char cognome[L_COGNOME];
    char nome[L_NOME];
    char sesso;
    char indirizzo[L_INDIRIZZO];
    int telefono;
    int eta;
}contatto;

 main(){
     contatto rubrica[NUM_CONTATTI];

 }
