/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 071: Dato un numero X visualizzare l'elenco dei suoi divisori. */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    float num; //numero X
    int cont; //contatore
    int b; //versione int di num

    do{
        printf("Inserisci un numero naturale: ");
        scanf("%f" , &num);
        b = (int) num;
    } while(num<=0 || b!=num); //verifico che il numero sia naturale
    cont=1;
    while(cont<=(b/2)){
        if(b%cont==0){ //controllo se il valore di cont è un divisore del numero X
            printf("%i\n", cont); //Stampo un divisore
        }
        cont++; //incremento il contatore
    }
    printf("%.0f", num);

}
