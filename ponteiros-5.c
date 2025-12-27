#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Elabora uma função que receba duas strings como parâmetros e
verifique se a segunda string está dentro da primeira. Para isso, utilize
apenas aritmética de ponteiros.
 */
char* funcao(){
    static char nome[30];
    printf("Digite uma string\n");
    setbuf(stdin,NULL);
    fgets(nome,30,stdin);
    nome[strcspn(nome,"\n")]='\0';
    return nome;
}

int verificasubstring(char *str1, char *str2){
    char *ptr1 = str1;
    char *ptr2 = str2;

    while (*ptr1){
        char *inicio = ptr1;
        ptr2 = str2;

        while (*inicio && *ptr2 && (*inicio == *ptr2)){
            inicio++;
            ptr2++;
        }//fim do primeiro while
        if (*ptr2 == '\0'){
            return 1; //str2 esta dentro de str1
        }
        ptr1++;
    }
return 0;
//str2 nao esta dentro de str1
}

int main (){
    char string1 [30];
    char string2 [30];

    strcpy(string1, funcao());
    strcpy(string2, funcao());

    if (verificasubstring(string1, string2)) {
        printf("A string (%s ) esta dentro da string (%s ).\n", string2, string1);
    } else {
        printf("A string (%s ) NAO esta dentro da string (%s ).\n", string2, string1);
    }
    
    return 0;
}