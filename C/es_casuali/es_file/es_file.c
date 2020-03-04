#include<stdio.h>
#include<stdlib.h>

int main(){

    char riga[50];
    FILE *f;
    f = fopen("prova_file.txt","r"); //nome file, operazione (read-write)
    if(f==NULL){ //se f==NULL vuoldire che il file non è stato trovato
        printf("Not found.");
        return 1;
    }
    else{
    while(!feof(f)){ //EOF, end of file ----- feof(int) funzione che ci fa accorgere quando siamo arrivati alla fine del file, int = puntatore
    fgets(riga, 50, f); //vettore, dimensione, puntatore al file
    scanf("%s", riga);
    }
    }
    // fscanf = scanf per i file (non molto usata, non si accorge degli errori in una riga)
    // fgets = fa leggere ciò che è stato inserito e legge anche \n
    // fgetc = per i caratteri
    //il metodo migliore con i file è quello di dividere il file in tante stringhe e lavorare su ognuna di esse

    fclose(f);
    return 0; //il main è una funzione che restituisce sempre il valore 0 se tutto è andato a buon fine
}
