/* Author: Acchiardi Paolo
Date: 02-05-2019
es.039: Invertire una stringa senza usare una stringa di appoggio. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNG 15
int main(){
    char s[LUNG];
    char t;
    int b,k,c;
    printf("Inserisci il tuo nome: ");
    gets(s);
    for(k=0;s[k]!='\0';k++){
    } //k va a valere come l'indice della cella contenente '\0'
    b = k;
    for(c=0;c<b;c++){
        t=s[c];
        s[c]=s[k-1];
        s[k-1]=t;
        k--;
    }
    printf("%s", s);
}
