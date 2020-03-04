/* Data una stringa (con elemento tappo\0) creare la stringa con i caratteri invertiti */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNG 30
int main(){
    char stringa1[LUNG];
    char stringa2[LUNG];
    int k;
    int c;
    int b;
    printf("Inserisci una frase da invertire: ");
    fgets(stringa1, LUNG, stdin); //per stampare una stringa anche dopo lo spazio, fgets(nome stringa, lunghezza, stdin)
    printf("%s", stringa1);
    k=-1;
    do{
       k++;
    }while(stringa1[k]!='\0');
    b=k-1;
    k++;
    for(c=0;c<k-1;c++){
        stringa2[c]=stringa1[b];
        b--;
    }
    printf("%s", stringa2);
}

//strcmp(str1,str2) guarda cosa viene prima in ordine alfabetico se viene >0 vuoldire che str1 viene dopo str2, <0 str1 viene prima di str2 (calcola le lettere con il loro
//valore in codice ASCII, quindi A viene prima di a. "a" e "aa" restituiscono un -1. Gli unici valori restituibili sono -1,0,1
//strlen(string) lunghezza (non conta '\0')
//strcat(s1,s2) aggiunge s2 alla fine di s1
//strcpy(s1,s2) copia s2 in s1
//sizeof(s1) indica il numero di celle occupate in memoria (anche '\0')
