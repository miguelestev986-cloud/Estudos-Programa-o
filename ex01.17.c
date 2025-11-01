#include <stdio.h>
#define MAX 1000

int main(){
    int c, i;
    char frase[MAX];

    for (i = 0;(c = getchar()) != EOF; ++i){
        frase[i] = c;
        if (c == '\n'){
            frase[++i] = '\0';
            if (i >= 80){
                printf("%s", frase);
                i = -1;
            }
            else
                i = -1;  
        }
    }
}