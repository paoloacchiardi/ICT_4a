#include<stdio.h>
#include<stdlib.h>
#define DIM 100
int main(){
    FILE *fp;
    FILE *nuovo_file;
    fp = fopen("poesi_solo_et_pensoso.txt","r"); //file pieno di roba
    nuovo_file = fopen("poesia_2.txt","w");
    copio_file(fp,nuovo_file);
}

void copio_file(FILE punt1, FILE punt2){
    char stringa[DIM];
    int k;
    k=0;
    while(fgets(punt1,))
}
