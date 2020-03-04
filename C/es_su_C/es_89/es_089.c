/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 089: Dati N numeri trovare il minimo, il massimo e la media di quelli superiori o uguali a 100 e il minimo, il massimo e la media di
quelli inferiori a 100. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    int n; //numero dei numeri
    float num; //numero
    float min100su; //numero minore tra i numeri maggiori o uguali a 100
    float max100su; //numero maggiore tra i numeri maggiori o uguali a 100
    float somma100su; //somma dei numeri maggiori o uguali a 100
    float media100su; //media tra i numeri maggiori o uguali a 100
    float min100giu; //numero minore tra i numeri inferiori a 100
    float max100giu; //numero maggiore tra i numeri inferiori a 100
    float somma100giu; //somma dei numeri inferiori a 100
    float media100giu; //media tra i numeri inferiori a 100
    int cnum; //contatore dei numeri
    int csopra; //contatore dei numeri maggiori o uguali a 100
    int csotto; //contatore dei numeri inferiori a 100

    printf("Inserisci il numero dei numeri: ");
    scanf("%d", &n);
    cnum=0;csopra=0;csotto=0;somma100su=0;somma100giu=0;min100su=0;max100su;media100su=0;min100giu=0;max100giu;media100giu=0;
    while(n>cnum){ //eseguo il ciclo n volte
        printf("Inserisci un numero: ");
        scanf("%f", &num);
        if(num>=100){
            if(csopra==0){ //controllo se è il primo numero maggiore o uguale a 100 inserito
                somma100su=num;
                min100su=num;
                max100su=num;

            }
            else{
                if(num>=max100su){ //controllo se il numero è maggiore o uguale al numero maggiore di 100 più grande
                    somma100su=somma100su+num;

                }
                else{
                    if(num<min100su){ //controllo se il numero è minore al numero maggiore di 100 più piccolo
                        min100su=num;

                    }
                }
            }
       csopra++;
        }
        else{
            if(csotto==0){ //controllo se è il primo numero inferiore a 100 inserito
                somma100giu=num;
                min100giu=num;
                max100giu=num;
                csotto++;
            }
            else{
                if(num>=max100giu){ //controllo se il numero è maggiore o uguale al numero minore di 100 più grande
                    max100giu=num;
                }
                else{
                    if(num<min100giu){ //controllo se il numero è minore al numero minore di 100 più piccolo
                        min100giu=num;
                    }
                }
            somma100giu=somma100giu+num;
            csotto++;
          }
        }
    cnum++;
    }
    if(csopra!=0){ //controllo se sono stati inseriti dei numeri maggiori o uguali a 100
        media100su=(somma100su/csopra);
    }
    if(csotto!=0){ //controllo se sono stati inseriti dei numeri inferiori a 100
    media100giu=(somma100giu/csotto);
    }
    printf("Il numero minimo,massimo,la media dei numeri maggiori o uguali a 100, il minimo, il massimo,la media dei numeri inferiori a 100 "
           "sono rispettivamente\n %.3f , %.3f , %.3f , %.3f , %.3f , %.3f", min100su, max100su, media100su, min100giu, max100giu, media100giu);
}
