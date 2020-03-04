#include<stdio.h>
#include<stdlib.h>
#define DIM 2
typedef struct a{
    int x;
    char string[10];
    char y;
    float p;
}ins;

int main(){
    FILE *fp;
    ins b[DIM];
    int k;
    k=0;
    printf("Inserisci un numero intero: ");
    scanf("%d",&b[k].x);
    printf("Inserisci una parola: ");
    scanf("%s",b[k].string);
    printf("Inserisci un numero non intero: ");
    scanf("%f",&b[k].p);
    fp = fopen("es1.txt","w");
    fprintf(fp,"%d %s %.1f ", b[k].x, b[k].string, b[k].p); //scrivo nel file i valori delle seguenti variabili
    fclose(fp);
    fp = fopen("es1.txt","r");
    k++;
    fscanf(fp,"%d %s %f ", &b[k].x, b[k].string, &b[k].p); //assegno alle variabili della struct di appoggio i valori presi dal file
    printf("%d %s %.1f ", b[k].x, b[k].string, b[k].p); //stampo i valori delle variabili di appoggio
    fclose(fp);
}
