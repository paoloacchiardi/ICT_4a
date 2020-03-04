#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("prova.txt","r"); //vale NULL se non esiste
    if(fp == NULL){
        printf("Il file \"prova.txt\" non esiste.\n");
        fp = fopen("prova.txt","w"); //il write crea il file se non esiste
        printf("Il file \"prova.txt\" e' stato creato.\n");
    }
    else{
        fp = fopen("prova.txt","a"); //a sta per append e apre il file posizionando il cursore alla fine, se esso non esiste lo crea
    }
    fclose(fp); //chiudo il file
}
