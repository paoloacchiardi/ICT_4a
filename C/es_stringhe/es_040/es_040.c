/* Author: Acchiardi Paolo
Date: 02-05-2019
es.040: Raddoppiare  le  occorrenze  delle  vocali  in  una  stringa  (ciaociiaaoo)Usare  2 stringhe. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNG 25
int main(){
    char s[LUNG];
    int k,t;
    k=0;
    printf("Inserisci il tuo nome: ");
    gets(s);
    do{
        switch(s[k]){
            case 'a':
            break;
        case 'A':
            break;
        case 'u':
            break;
        case 'U':
            break;
        case 'e':
            break;
        case 'E':
            break;
        case 'i':
            break;
        case 'I':
            break;
        case 'o':
            break;
        case 'O':
            break;
        }
        k++;
    }while(s[k]!='\0');
    puts(s);
}
