#include <stdio.h>
#include <stdlib.h>

//Copia conteudo e passa para outra pasta;

void copiarConteudo(FILE *file1, FILE *file2){

    char leitor[1000];

        while(fgets(leitor,1000,file1) != NULL)
        fputs(leitor, file2);
}


int main (){

    FILE *file1 = fopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt", "r");
    if (file1 == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        exit(1);
    }
    
    FILE *file2 = fopen("C:\\Users\\khass\\Documents\\Programas\\testando2.txt","w");

    copiarConteudo(file1,file2);

    fclose(file1);
    fclose(file2);

    return 0;
}