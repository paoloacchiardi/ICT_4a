#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LUNG 15
int VocaliStringa(char s[], int dim);
int main(){
    char s[LUNG];
    int num_vocali;
    printf("Inserisci il tuo nome: ");
    gets(s);
    num_vocali=VocaliStringa(s, LUNG);
    printf("%d", num_vocali);
}

int VocaliStringa(char s[], int dim){
    int k;
    int vocali;
    vocali=0;
    for(k=0;k<dim;k++){
        switch(s[k]){
        case 'a':
            vocali++;
            break;
        case 'A':
            vocali++;
            break;
        case 'u':
            vocali++;
            break;
        case 'U':
            vocali++;
            break;
        case 'e':
            vocali++;
            break;
        case 'E':
            vocali++;
            break;
        case 'i':
            vocali++;
            break;
        case 'I':
            vocali++;
            break;
        case 'o':
            vocali++;
            break;
        case 'O':
            vocali++;
            break;
        }
    }
    return vocali;
}

