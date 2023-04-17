
//Ler o numerador e o denominador de uma fração e transformá-la em um número decimal

#include <stdio.h>
#include <stdlib.h>

int main()
{
     float numerador, denominador, resultado;

    scanf("%f", &numerador);

    scanf("%f", &denominador);

    resultado = numerador / denominador; 

    printf("%f\n", resultado);
    return 0;
}