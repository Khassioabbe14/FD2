#include <stdio.h>
#include <stdlib.h>

#define bitcoin = 150;


int main (){

#ifdef bitcoin
    printf("bitcoin sincronizado\n");//no caso foi definida
    printf("prosseguindo com a codagem...\n\n\n");
#else
    printf("bitcoin descincronizado\n");//no caso nao foi definida
    printf("Tente sincronizar outro bit\n");
#endif


    





    return 0;
}