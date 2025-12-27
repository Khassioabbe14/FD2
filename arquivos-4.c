#include <stdio.h>
#include <stdlib.h>

/**
 * Crie um programa para calcular e exibir o número de palavras
contido em um arquivo texto. O usuário deverá informar o nome do
arquivo.
 */

int main (){

int numero = 0;
        FILE *file1;
            char nome_arquivo[100];
    /*
    printf("Digite qual arquivo deseja abrir\n");
    scanf("%s",nome_arquivo);
    file1 = fopen("nome_arquivo", "r");
    */

    file1 = fopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt","r");

    if(file1 == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        exit(1);
    }while(fgetc(file1) != EOF){
            numero++;
    }
    printf("numero de palavras: ( %d )\n",numero);
    return 0;
}