#include <stdio.h>
#include <stdlib.h>

//le o que foi escrito no arquivo

int main (){
    FILE *file;
    file = fopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt", "r");

    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        getchar();
        exit(0);
    }
    
    char frase[100];
    while(fgets(frase,100,file) != NULL){
        printf("%s", frase);
    }

    fclose(file);

    return 0;
}
