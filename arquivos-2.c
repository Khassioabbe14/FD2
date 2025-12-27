#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  Escreva um programa que leia do usuário os nomes de dois
arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
segundo).
 */

//  C:\\Users\\khass\\Documents\\Programas\\testando.txt
int main (){
    char nome_arquivo3[100];
        char string[200];
            char nome_arquivo1[100];
                char nome_arquivo2[100];
                    FILE *file1;
                        FILE *file2;
                            FILE *file3;

    printf("Digite o nome do arquivo 1\n");
        scanf("%s",nome_arquivo1);
            printf("Digite o nome do arquivo 2\n");
                scanf("%s",nome_arquivo2);
                    printf("Digite o nome do arquivo 3 (onde sera salvo o conteudo)\n");
                        scanf("%s",nome_arquivo3);

    // Abre o primeiro arquivo para leitura
    file1 = fopen(nome_arquivo1, "r");
    if (file1 == NULL) {
        printf("Erro ao abrir o arquivo '%s'.\n", nome_arquivo1);
        exit(1);
    }

        // Abre o segundo arquivo para leitura
        file2 = fopen(nome_arquivo2, "r");
        if (file2 == NULL) {
            printf("Erro ao abrir o arquivo '%s'.\n", nome_arquivo2);
            fclose(file1); // Fecha o primeiro arquivo antes de sair
            exit(1);
        }

            // Abre o terceiro arquivo para escrita
            file3 = fopen(nome_arquivo3, "w");
            if (file3 == NULL) {
                printf("Erro ao criar o arquivo '%s'.\n", nome_arquivo3);
                fclose(file1);
                fclose(file2);
                exit(1);
            }

                    // Copia o conteúdo do primeiro arquivo para o terceiro
                    char ch;
                    while ((ch = fgetc(file1)) != EOF) {
                        fputc(ch, file3);
                    }

                        // Copia o conteúdo do segundo arquivo para o terceiro
                        while ((ch = fgetc(file2)) != EOF) {
                        fputc(ch, file3);
                        }

                            // Fecha todos os arquivos
                                fclose(file1);
                                fclose(file2);
                                fclose(file3);

                                        printf("Os conteúdos dos arquivos '%s' e '%s' foram combinados no arquivo '%s'.\n",
                                        nome_arquivo1, nome_arquivo2, nome_arquivo3);

    return 0;
}//fim da main

//codigo formato bloquinho com escada