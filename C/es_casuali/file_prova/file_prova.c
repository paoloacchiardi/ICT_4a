#include<stdio.h>
#include<stdlib.h>
main(){
    int x;
    scanf("%d", &x);
    fscanf(stdin, "%d", &x); //salva tutto in x, uguale a scanf
    x = 10;
    printf("%d\n", x);
    fprintf(stdout, "%d\n", x); //uguale a printf
    fprintf(stderr, "%d\n", x); //uguale a printf


}

