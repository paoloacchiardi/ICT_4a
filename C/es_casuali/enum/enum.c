/* ENUM */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum giornisettimana {Lun, Mar, Mer, Gio, Ven, Sab, Dom};
typedef enum blackops2 {Depot = 20, Town, Farm} bo2; //20, 21 , 22 tipo bo2
typedef enum giornisettimana giorni; //il tipo sarà giorni
typedef enum blackops {Five = 40, Kino = 70} bo;
typedef enum nomemio {one = 80, two = 97, three = 111, four = 108, point = 46}name;
int main(){
     //crei un tipo giorni_settimana con Lun==0, Mar==1, etc.

    giorni oggi = Sab; //crei una variabile oggi di tipo giorni a cui assegni Dom, "6"
    printf("%d\n", oggi);

    giorni domani = Sab * 4; //creo una variabile domani che vale Sab * 4 ovvero 5*4
    printf("%d\n", domani);

    bo2 mappa = Town; //variabile mappa tipo bo2
    printf("%d\n", mappa);

    bo map = Five;
    printf("%c\n", map); //mettendo %c stampa il carattere alfanumerico corrispondente al numero ascii di map

    printf("My name: ");

    //stampo il mio nome
    name p = one;
    printf("%c", p);
    name a = two;
    printf("%c", a);
    name o = three;
    printf("%c", o);
    name l = four;
    printf("%c", l);
    name os = three;
    printf("%c", os);
    name pt = point;
    printf("%c\n", pt);
    return 0;
}
