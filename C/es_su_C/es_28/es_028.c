/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.028: Data l'equazione di una retta y = mx + q e le coordinate di un punto dire se il punto appartiene alla retta.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    //dichiarazione delle variabili
    float m; //coefficiente angolare di una retta
    float q; //intercetta di una retta
    float x; //valore di x
    float y; //valore di y

    printf("inserire il coefficente angolare della retta: ");
    scanf("%f" , &m);
    printf("inserire l'intercetta: ");
    scanf("%f" , &q);
    printf("inserire la coordinata x del punto P: ");
    scanf("%f" , &x);
    printf("inserire la coordinata y del punto P: ");
    scanf("%f" , &y);

    if(y == x * m + q){
        printf("il punto P appartiene alla retta. ");
   }else{
        printf("il punto P non appartiene alla retta. ");

}





}
