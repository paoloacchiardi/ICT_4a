/* Author: Acchiardi Paolo
Date: 20/03/2019
Es. 016: Creare un vettore contenente i primi N numeri della successione di Fibonacci che è così definita:a0=1;a1=1; an= an-1 + an-2;  per n>=2. */

#include<stdlib.h>
#include<stdio.h>
#include "../vettori.h"

#define DIM 20

int main(){
 long long int a[DIM];
 int n;
 int k;

 do{
    printf("Quanti numeri vuoi? ");
    scanf("%d", &n);
 }while(n<0 || n>DIM);

 for(k=0;k<n;k++){
    if(k==0){
        a[0]=1;
    }else{
        if (k==1){
        a[1]=1;
        }else{
        a[k]=a[k-1]+a[k-2];
        }
    }
 }
  for(k=0;k<n;k++){
    printf("%lld      ", a[k]);
  }
}
