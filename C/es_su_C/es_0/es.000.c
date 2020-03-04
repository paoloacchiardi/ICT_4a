/*
author: Paolo Acchiardi
date: 18-10-2018
Es n.0: Dati due numeri calcolarne la somma
*/
#include <stdio.h>
#include <stdlib.h>

main(){


float num1;    //primo numero da sommare
float num2;    //secondo numero da sommare
float somma;   //somma dei due numeri

//calcolo
printf ("inserire un numero:");
scanf ("%f" , &num1);
printf ("inserire il secondo numero:");
scanf ("%f" , &num2);

somma = num1 + num2;

printf ("La somma di %f e di %f è &f" , num1 , num2 , somma);

//paausa prima della terminazione
//system("pause");    //system call
printf("\n premi invio per continuare")
fflush(stdin);    //pulisco il buffer da tastiera da caratteri già presenti e poi legge un carattere
getch();          //legge un carattere da tastiera

}
