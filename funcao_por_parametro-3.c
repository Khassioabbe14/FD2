#include <stdio.h>
#include <stdlib.h>

/**
 * beta tester
 */

typedef struct {
    char nome_banda[50];
        int ranking;
            int membros;
                float fas;
}struct_test;


int main (){
struct_test str[5];

    for (int i = 0; i < 5; i++){
        printf("De o nome da banda \n");
            setbuf(stdin,NULL);
                fgets(str[i].nome_banda,50,stdin);
                    str[i].nome_banda[strcspn(str[i].nome_banda,"\n")]='\0';
                        //pega nome, concluido. test = ok
                            printf("Digite em qual ranking ela esta nas suas avaliacoes\n");
                                setbuf(stdin,NULL);
                                    scanf("%d",&str[i].fas);
                                        //pega ranking, concluido. test = false
                                            printf("Digite quantos membros a banda %s possui\n",str[i].nome_banda);
                                                setbuf(stdin,NULL);
                                                    scanf("%d",&str[i].fas);
                                                        //pega membros, concluido. test = false
                                                            printf("Digite a quantidade de fas que a banda tem (Valor exato)\n");
                                                                setbuf(stdin,NULL);
                                                                    scanf("%f",&str[i].fas);
                                                                        //pega fãs, concluido. test = false
}
                                            for (int i = 0; i < 5; i++){
                                                printf("\n");
                                                    printf("Banda: %s\n",str[i].nome_banda);
                                                        printf("Rank: %d\n",str[i].ranking);
                                                            printf("Membros: %d\n",str[i].membros);
                                                                printf("Fas: %d\n",str[i].fas);
}//exibe as bandas e suas caracteristicas



    return 0;
}