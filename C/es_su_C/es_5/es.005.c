/*
author: Paolo Acchiardi
date: 19-10-2018
Es n.5: Date tre età calcolare l'età media
*/
#include <stdio.h>
#include <stdlib.h>
main(){

    int eta1;           //prima età inserita
    int eta2;           //seconda età inserita
    int eta3;           //terza età inserita
    float eta_media;      //età media tra le tre età

    //calcolo

    printf("Inserire la prima eta':");
    scanf("%i" , &eta1);
    printf("inseire la seconda eta':");
    scanf("%i" , &eta2);
    printf("inserire la terza eta':");
    scanf("%i" , &eta3);


    eta_media = ((float) eta1 + eta2 + eta3) / 3;

    printf("l'eta' media e' %f " , eta_media);

}
