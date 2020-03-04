/*
author: Acchiardi Paolo
Data: 07/09/2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

    int num_tent;
    int num;
    int num_da_ind;

    srand(time(NULL));
    printf("Io scelgo un numero da 1 a 100 e tu devi indovinarlo\n");
    num_tent=0; num=0;
    num_da_ind=rand()%100+1; //numero random generato dal pc
    do{
        printf("Inserire il numero\n");
        scanf("%d", &num);
        num_tent++;
        if(num_da_ind == num){
            printf("Hai indovinato\n");
        }
        else{
            if(num < num_da_ind){
                printf("Il numero e' piu' alto\n");
            }
            else{
                printf("Il numero e' piu' basso\n");
            }
        }
    }while(num_da_ind != num);
    printf("Hai effettuato %d tentativi", num_tent);

    //fine programma

    printf("\nPremi invio per continuare");
}
