/* Author: Acchiardi Paolo
Date: 27/01/2019
Es.007: Scrivere la funzione che restituisce il maggiore tra due numeri.*/

#include<stdio.h>
#include<stdlib.h>



float MAGGIORE(float num1, float num2){
    if(num1>=num2){
        return(num1);
        }
    else{
        return(num2);
    }
}
int main(){

    float numero1;
    float numero2;
    float numero3;

    printf("Inserire il primo e il secondo numero: ");
    scanf("%f %f", &numero1, &numero2);
    numero3 = MAGGIORE(numero1,numero2);
    printf("Il maggiore e' %f", numero3);

}
