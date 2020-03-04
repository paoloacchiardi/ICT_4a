/*
Author: Acchiardi Paolo
Date: 14/11/2018
Es. n.037: Dati quattro numeri interi positivi determinare se possono esserei lati di un quadrato oppure di un rettangolo. In entrambi i casi
           calcolare Area e Perimetro della figura geometrica.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    //dichiarazione delle variabili

    float a; //primo numero intero positivo
    float b; //secondo numero intero positivo
    float c; //terzo numero intero positivo
    float d; //quarto numero intero positivo
    float p; //perimetro
    float ar; //area

    printf("inserisci rispettivamente il primo, il secondo, il terzo e il quarto lato di un poligono con quattro lati: ");
    scanf("%f %f %f %f" , &a , &b , &c , &d);

    if(a == b){
        if (b == c){
            if (c == d){
                p = a + b + c + d; //calcolo del perimetro di un quadrato
                ar = a * a; //calcolo dell'area di un quadrato
                printf("e' un quadrato. L'area vale %f e il perimetro vale %f " , ar , p);
            }else{
                printf("non e' ne' un rettangolo, ne' un quadrato");
            }
        }else{
            if(c == d){
                p = (c + a) * 2; //calcolo del perimetro di un rettangolo
                ar = a * c; //calcolo dell'area di un rettangolo
                printf("e' un rettangolo. L'area vale %f e il perimetro vale %f" , ar , p);
            }else{
                printf("non e' ne' un rettangolo, ne' un quadrato");
            }
        }
    }else{
        if(a == c){
            if(b == d){
                p = (d + c) * 2; //calcolo del perimetro di un rettangolo
                ar = d * c; //calcolo dell'area di un rettangolo
                printf("e' un rettangolo. L'area vale %f e il perimetro vale %f" , ar , p);
            }else{
                printf("non e' ne' un rettangolo, ne' un quadrato");
            }
        }else{
            if(a == d){
                if(b == c){
                    p = (c + d) * 2; //calcolo del perimetro di un rettangolo
                    ar = c * d; //calcolo dell'area di un rettangolo
                    printf("e' un rettangolo. L'area vale %f e il perimetro vale %f" , ar , p);
                }else{
                    printf("non e' ne' un rettangolo, ne' un quadrato");
                }
            }else{
            printf("non e' ne' un rettangolo, ne' un quadrato");
            }
        }
    }
}
