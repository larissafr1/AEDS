// Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c1, c2, hipotenusa;

   scanf("%f", &c1);

   scanf("%f", &c2);

   hipotenusa = pow(c1,2) + pow(c2,2);

   hipotenusa = sqrt(hipotenusa);

   printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}