#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){

    char x[100];

    fgets(x,100,stdin);
    printf("%s",x);
    
    freopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt","r",stdin);
    fgets(x,100,stdin);
    printf("%s",x);

    


    return 0;
}