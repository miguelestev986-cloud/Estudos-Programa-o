#include <stdio.h>
/*Escreva um programa para imprimir um histograma dos comprimentos das palavras em sua entrada.
É fácil desenhar o histograma com as barras na horizontal;
uma orientação vertical é mais desafiadora.*/

int main(void) {
    int i, tamanho, j, ca;
    tamanho = 0;

    for (i = 0; (ca = getchar()) != EOF; ++i){
        ++tamanho;
        if (ca == '\n'){
            printf("Tamanho:");
            for(j = 1; j < tamanho; ++j)
                printf("#");
            printf("\n");
            tamanho = 0;
        }
    }
    return 0;
}