#include <stdio.h>

int main(){
    int c;
    printf("Caractere = EOF?\nFALSE = 0\nTRUE = 1\n");
    while((c = getchar()) != EOF){
        if(c != '\n'){
            putchar(c);
            printf(" = %d\n",c == -1);
        }
    }
    printf("%d\n", c == -1);
    printf("EOF = %d", EOF);
    return 0;
}