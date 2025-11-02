#include <stdio.h>
#define MAX 1000

/*Escreva uma função reverse(s) que inverta a sequência de caracteres da string s.
Use-a para escrever um programa que inverta cada linha de entrada.*/

int tamanho(char f[]);
void reverse(char f[]);

int main(){
    int c, i = 0;
    char frase[MAX];

    while((c = getchar()) != EOF){
        if (c != '\n' && i < MAX-1)
            frase[i++] = c;
        else if(c == '\n'){
            frase[i] = '\0';
            reverse(frase);
            printf("\n");
            i = 0;
        }
    }
    return 0;
}

int tamanho(char f[]){
    int tamanho = 0;
    while (f[tamanho] != '\0')
        ++tamanho;
    return tamanho;
}

void reverse(char f[]){
    for(int t = tamanho(f)-1; t >= 0 ; --t)
        putchar(f[t]);
}