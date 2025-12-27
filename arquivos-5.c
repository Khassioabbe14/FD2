#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * Elabore um programa para calcular e exibir o número de
vezes que cada letra ocorre dentro de um arquivo texto.
Ignore as letras com acento.
 */

int main (){
    FILE *file;
        int contador[26] = {0};
            char caractere;
//criaçao das variaveis

    file = fopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt","r");
    if (file == NULL){
        printf("erro ao abrir o arquivo\n");
        exit(1);
    }

    while ((caractere = fgetc(file)) != EOF){
        caractere = tolower(caractere);
        if(caractere >= 'a' && caractere <= 'z'){
            contador[caractere - 'a']++;
        }
}
    printf("\nfrequencia de cada letra dentro do arquivo\n");
    for(int i = 0; i < 26; i++){
        printf("letra '%c': %d vezes \n",'a' + i,contador[i]);
    }

    fclose(file);
//fecha arquivo
    return 0;
}//fim da main