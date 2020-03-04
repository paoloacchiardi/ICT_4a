/* STRUCT */

#include<stdio.h>
#include<stdlib.h>
#include<string.h> //libreria per le stringhe

struct tipo_libro{              //creo una struttura (struct) tipo_libro
        char titolo[50];        //è una stringa, un vettore di caratteri contenente 49 caratteri alfanumerici, nel 50esimo posto ci sarà il carattere terminatore \0 inserito automaticamente da C
        short capitoli;
        char autore[50];
        short anno_pubblicazione;
        float prezzo;
}libro3, libro4;        //creo due variabili di tipo struct tipo_libro

struct zoo_per_animali{
    char nome[25];
    int num_animali;
}; //sempre mettere il punto e virgola dopo la struttura (anche se non si scrive nient'altro

typedef struct zoo_per_animali zoo;  // le variabili struct zoo_per_animali saranno di tipo zoo, che coincide con zoo_per_animali

typedef struct saluti_lingue{ //dichiara fin da subito che struct saluti_lingue = saluti
    char ita[10];
    char francese[10];
    char inglese[10];
}saluti;

int main(){

    struct tipo_libro libro1;
    struct tipo_libro libro2;
    struct tipo_libro collezione[3]; //creo un vettore contenente 3 celle di tipo struct tipo_libro
    zoo libro5;
    zoo libro6; //il tipo zoo corrisponde a struct zoo_per_animali
    zoo insieme[4];
    saluti libro7; //saluti è un tipo di variabile
    zoo *puntatore; //è un puntatore al tipo zoo

    libro1.capitoli = 8; //nome variabile . area interna alla struttura = valore
    printf("\nIl libro 1 ha %d capitoli.", libro1.capitoli);
    strcpy(libro1.titolo, "Stringhe,typedef e struct"); //inserisce il titolo al libro1 (copia la frase nella stringa)
    printf("\nIl titolo del libro1 e' %s.", libro1.titolo); // %s sta per stringz
    printf("\nInserisci l'autore del libro1 : ");
    scanf("%s", libro1.autore);
    printf("%s.", libro1.autore); //lo scanf  non stampa ciò che si inserisce dopo lo spazio

    libro5.num_animali = 13;
    puntatore = &libro5; //punta libro5 che è di tipo zoo
    printf("\nIl numero di animali nel libro 5 e' %d.", (*puntatore).num_animali); //per stampare tramite puntatore bisogna inserire (^nome_puntatore).sezione
    printf("\nIl numero di animali nel libro 5 e' %d.", puntatore->num_animali); //è l'equivalente, si tolgono le parentesi,l'asterisco e il punto e si fa una freccia ->
    strcpy(libro5.nome, "Animals."); //dai un titolo al libto 5
    printf("\nIl titolo del libro 5 e' %s", puntatore->nome); //stampi il titolo del libro 5
}

//FUNZIONI PER LE STRINGHE
//strlen(char stringa) restituisce la lunghezza di una stringa
//strcpy(stringa1, stringa2) copia stringa1 in stringa2
//strcat(stringa1, stringa2) accoda a stringa1 il contenuto di stringa2
//strcmp(stringa1, stringa2) confronta 2 stringhe, se A=B 0, se A>B +, se A<B -
