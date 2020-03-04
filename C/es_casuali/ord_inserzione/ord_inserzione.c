/* ordinamento inserzione. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 100

int main(){
    char risp[2];
    int a;
    int vett[DIM];
    int k;
    int c;
    int b;
    a = 0;

    do{
        printf("Inserisci l'elemento della cella [%d] (solo interi): ", a);
        scanf("%d", &vett[a]);
        for(k=0;k<a;k++){
            if(vett[a]<vett[k]){
                    c=a-k;
                    while(c>0){
                        vett[c+1]=vett[c];
                        c--;
                    }
                    vett[k]=vett[a];
            }
        }
        printf("Vuoi inserire altri valori? (si/no): ");
        scanf("%c", &risp);
        a++;
    }while(risp == "si");

   for(b=0;b<a;b++){
    printf("Il valore della cella [%d] e' %d.", b, vett[b]);
   }
}
