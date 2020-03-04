/* Author: Acchiardi Paolo
Date: 07/03/2019
Es.003: Scrivi la procedura PerimetroAreaRettangolo che ricevuti come parametri 2 reali, rispettivamente base e altezza di un
        rettangolo, restituisca il perimetro e l'area del rettangolo. Scrivere anche un main che utilizzi la procedura passando come
        parametri attuali dei valori letti da tastiera.*/

#include<stdio.h>
#include<stdlib.h>

void PerimetroAreaRettangolo(float base, float altezza, float *perimetro, float *area);
int main(){
    float b;
    float h;
    float a;
    float p;

   do{ printf("Inserire la base e l'altezza del rettangolo: ");
    scanf("%f %f", &b, &h);
   }while(b<=0 || h<=0);
    PerimetroAreaRettangolo(b, h, &p, &a);
    printf("Il perimetro vale %.2f e l'area vale %.2f.", p, a);
}

void PerimetroAreaRettangolo(float base, float altezza, float *perimetro, float *area){
    *perimetro=(base*2)+(altezza*2);
    *area=base*altezza;
}
