/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 075: Dato un elenco di n numeri, si devono scegliere quelli che sono maggiori di 10 e minori di 100. Contare tali numeri e scrivere la loro somma. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    int n; //numero di numeri
    float num; //numero inserito dall'utente
    int cn; //contatore
    int cc; //contatore dei numeri compresi tra 10 e 100
    float somma; //somma dei numeri compresi tra 10 e 100


    printf("Inserire il numero di numeri: ");
    scanf("%d", &n);
    cn=0; cc=0; somma=0;
    while(cn<n){ //ripeto il ciclo n volte
        printf("Inserire un numero: ");
        scanf("%f", &num);
        if(10<num){ //verifico che il numero sia maggiore di 10
                if(num<100){ //verifico che il numero sia minore di 100
                     cc++; //incremento di 1 il numero di numeri compresi tra 10 e 100
                     somma=somma+num; //sommo il valore del numero alla somma degli altri numeri compresi tra 10 e 100
                    }
        }
        cn++; //incremento il contatore
    }
    printf("Il numero di numeri compresi tra di 10 e 100 sono %d e la loro somma equivale a %.3f", cc, somma);
}
