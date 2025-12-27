#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Escreva um programa que leia do usuário o nome de um arquivo
texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
 */
//  C:\\Users\\khass\\Documents\\Programas\\testando.txt

int main (){
    char nome_arquivo[100];
        FILE *file;
            int linhas = 0;
                char caractere;

    printf("digite o nome do arquivo que deseja abrir abaixo:\n");
    scanf("%s", nome_arquivo);

    file = fopen(nome_arquivo, "r");
    if (file == NULL){
        printf("nao foi possivel abrir o arquivo\n");
        exit(1);
    }

    while (( caractere = fgetc ( file )) != EOF ){
        if (caractere == '\n'){
            linhas++;
        }
    }
    printf("o arquivo %s possui %d linhas.\n",nome_arquivo,linhas);
    fclose(file);
    return 0;
}