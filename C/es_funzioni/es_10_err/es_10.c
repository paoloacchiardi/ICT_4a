#include<stdio.h>
#include<stdlib.h>

float ipotenusa(float c1, float c2);
float PerimetroTriangoloRettangolo(float c1,float c2);
float AreaTriangoloRettangolo(float c1,float c2);
void calcola(float c1, float c2, float *ipo, float *perim, float *area);

main(){
    float a,b;
    do{
        printf("Inserisci i due cateti: ");
        scanf("%f %f", &a, &b);
    }while(a<=0 || b<=0)

    ipo = ipotenusa(a,b);
    perim = PerimetroTriangoloRettangolo(a,b);
    area = AreaTriangoloRettangolo(a,b);
    calcola(a,b,&ipo,&perim,&area);
    printf("calcoli con procedura i=%.2f p=%.2f a=%.2f \n");
}

void calcola(float c1, float c2, float *ipo, float *perim, float *area){
    *ipo = sqrt(c1*c2 + c2*c2);
    *perim = *ipo + c1 + c2;
    *area = (c1 * c2) / 2;
}

float ipotenusa(float c1, float c2){
    return sqrt(c1*c2 + c2*c2);
}

float PerimetroTriangoloRettangolo(float c1,float c2){
    return *ipo + c1 + c2;
}

float AreaTriangoloRettangolo(float c1,float c2){
    return (c1 * c2) / 2;
}
