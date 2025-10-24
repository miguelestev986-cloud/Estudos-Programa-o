#include <stdio.h>
/*Queremos um programa que conte a ocorrência de dígitos, espaços em branco e
outros e que imprima na saída um histograma vertical ou horizontal*/

int main(void) {
    int brancos = 0, outros = 0, ca;
    int qdigito[10];

    // inicializa todos os contadores em 0
    for (int i = 0; i < 10; ++i)
        qdigito[i] = 0;

    // lê caracteres até EOF
    while ((ca = getchar()) != EOF) {
        if (ca == ' ' || ca == '\t' || ca == '\n')
            ++brancos;
        else if (ca >= '0' && ca <= '9')
            ++qdigito[ca - '0'];
        else
            ++outros;
    }

    printf("Dígitos:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d: ", i);
        for (int j = 0; j < qdigito[i]; ++j)
            putchar('#');
        putchar('\n');
    }

    printf("Brancos: %d\nOutros: %d\n", brancos, outros);
    return 0;
}
