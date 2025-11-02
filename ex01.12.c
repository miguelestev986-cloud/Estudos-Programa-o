#include <stdio.h>

/*Escreva um programa que imprime a entrada na saída, uma palavra por linha*/

int main(){

    int c;
    while ((c = getchar()) != EOF)
        if (c == ' '| c == '\t')
            printf("\n");
        else
            putchar(c);
    return 0;
}