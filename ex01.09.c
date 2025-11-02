#include <stdio.h>

/*Escreva um programa que substitui uma sequência de espaços por apenas um espaço.*/

int main() {
    int c, espaco_anterior;

    espaco_anterior = 0; // indica se o caractere anterior foi um espaço

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (espaco_anterior == 0) {
                putchar(c);
                espaco_anterior = 1; // marca que o último caractere foi espaço
            }
        } else {
            putchar(c);
            espaco_anterior = 0; // reseta quando não é espaço
        }
    }
    return 0;
}