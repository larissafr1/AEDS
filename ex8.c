

//Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores das
//duas variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No
//final, mostre os valores finais

#include <stdio.h>


int main() 
{
    float a, b, temp;

    scanf("%f", &a);

    scanf("%f", &b);

    temp = a;
    a = b;
    b = temp;

    printf("%f %f\n", a, b);

    return 0;
}