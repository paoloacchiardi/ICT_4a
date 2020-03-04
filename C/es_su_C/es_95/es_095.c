/* Author: Paolo Acchiardi
Date: 28/12/2018
Es. 095: Visualizzare i primi 40 (se no overflow) numeri della serie di Fibonacci, (la serie di Fibonacci prevede che ogni elemento sia
uguale alla somma dei due che li precedono;il primo elemento è 1 e quello che lo precede viene considerato 0; quindi: 1 1 (1+0) 2 (1+1)
3 (2+1) 5(3+2) 8 (5+3) 13 (8+5). Il programma non prevede in input; ad ogni iterazione occorre avere i due precedenti A e B
(all'inizio valgono 0 e 1). */
#include <stdio.h>
#include <stdlib.h>
int main(){
    //dichiarazione delle variabili
    const int LIM = 40; //costante che indica i 40 numeri da rilasciare in output
    int num; //ha il valore di due numeri prima del numero prima di prec
    int cont; //conta i numeri che vengono rilasciati in output
    int risultato; //ha il valore del numero che si rilascia in output
    int prec; //ha il valore del numero precedente

    num=1;prec=0;cont=2; //cont vale 2 perchè 0 e 1 sono i primi 2 numeri della serie di Fibonacci e vengono rilasciati in output prima del ciclo
    printf("%d\n", prec);
    printf("%d\n", num);
    while(cont<LIM){ //verifica che non si siano raggiunti i 40 output
        risultato=prec+num; //si calcola il nuovo numero
        num=prec;
        prec=risultato;
        printf("%d\n", risultato);
        cont++; //incrementa il contatore di 1 appena si rilascia un output
    }

}
