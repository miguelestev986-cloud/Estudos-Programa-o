#include <stdio.h>

/*Como você escreveria um programa de contagem de palavras?
Que entradas seriam boas para descobrir erros, se haverem?*/

int main(){

    int palavras, frase;
    palavras = 0;

    printf("Digite algo:\n");
    while ((frase = getchar()) != EOF)
        if (frase == ' '| frase == '\n'| frase == '\t')
           ++palavras;
    printf("Palavras: %d", palavras);
    return 0;
}
/*Observação: o código contabiliza novas linhas como palavras,
mesmo que não tenham nada escrito*/