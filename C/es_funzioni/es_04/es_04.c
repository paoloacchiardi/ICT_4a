/* Author: Acchiardi Paolo
Date: 18/01/2019
Es.004: Scrivere la procedura che ricevute le età di 3 persone,visualizzi a video i dati acquisiti in ordine decrescente.*/

#include<stdio.h>
#include<stdlib.h>

void decrescente(int age1, int age2, int age3);

int main(){
    //dichiarazione delle variabili

    int eta1; //età della prima persona
    int eta2; //età della seconda persona
    int eta3; //età della terza persona

    printf("Inserire le eta' delle 3 persone: ");
    scanf("%d %d %d", &eta1, &eta2, &eta3);
    decrescente(eta1,eta2,eta3);
    system("pause");
    return 0;
    }

void decrescente(int age1, int age2, int age3){
    if(age1>age2){
        if(age1>age3){
            if(age3>age2){
                printf("%d %d %d", age1, age3, age2);
            }
            else{
                printf("%d %d %d", age1, age2, age3);
            }
        }
        else{
            printf("%d %d %d", age3, age1, age2);
        }
    }
    else{
        if(age2>age3){
            if(age3>age1){
                printf("%d %d %d", age2, age3, age1);
            }
            else{
                printf("%d %d %d", age2, age1, age3);
            }
        }
        else{
            printf("%d %d %d", age3, age2, age1);
        }
    }
    printf("\n");
    return;
}
