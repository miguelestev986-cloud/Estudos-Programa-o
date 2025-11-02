#include <stdio.h>

/*
Modifique o programa de conversão de temperatura para imprimir um cabeçalho acima da tabela;

Escreva um programa para imprimir a tabela de conversão
de temperatura correspondente de Celsius para Fahrenheit;

Modifique o programa de conversão de temperatura
para imprimir a tabela na ordem reversa, isto é, de 300 para 0.*/

int main()
{
    float fahr, celsius;
    int lower, upper, step, ca;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    printf("\nConversor de Temperatura\n");
    printf("%s%15s\n", "Celsius", "Fahrenheit");

    fahr = upper;
    while (fahr >= lower)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%5.1f %15.1f\n", celsius, fahr);
        fahr = fahr - step;
    }
    return 0;
}
/*  outra forma

include <stdio.h>

#define LOWER 0 
#define UPPER 300 
#define STEP 20 

int main(){
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
*/
