#include <stdio.h>
#include <stdlib.h>

//escreve conteudo no arquivo selecionado

int main (){
    FILE *file;
    file = fopen("C:\\Users\\khass\\Documents\\Programas\\testando.txt", "a");

    if(file == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        getchar();
        exit(1);
    }
    
    fprintf(file, "\nprimeira linha\n");
    char frase[] = "segunda linha ";
    char caractere = '3';

    fputs(frase, file);
    fputc(caractere, file);

    fclose(file);

    return 0;
}
