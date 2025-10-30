#include <stdio.h>

void converta(float ce){
    float fa = (ce * (9.0/5.0)) + 32;
// números decimais são truncados!
    printf("Fahrenheit: %.1f", fa);
    return 0;
}

int main(){
    float ce = 0;
    printf("\nConversor de Celsius para Fahrenheit\n\nCelsius:");
    scanf("%f", &ce);
    converta(ce);
    return 0;
}