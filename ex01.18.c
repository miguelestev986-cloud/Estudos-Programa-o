#include <stdio.h>
#define MAXLINE 1000

/*Escreva um programa que remova espaços em branco (blanks),
tabulações e novas linhas no final de cada linha de entrada,
e apague completamente linhas que estejam em branco.*/

int main(){
    int i, c;
    i = 0;
    char frase[MAXLINE];
    
    while ((c = getchar()) != EOF){
        if (c == '\n')
            printf("%s", frase);
            i = 0;
        if (c != '\t' || c != ' '){
            frase[i] = c;
            ++i;
        }
    }
}