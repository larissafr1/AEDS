// Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e
// unidade) e mostrar o número invertido (no formato UDC). O número invertido deve ser
// armazenado em outra variável antes de ser mostrado



#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, centena, dezena, unidade, num_invertido;


    scanf("%d", &num);

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;

    num_invertido = (unidade * 100) + (dezena * 10) + centena;

    printf("%d\n", num_invertido);

    return 0;
}