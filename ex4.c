// Ler com o raio de um círculo e mostrar o seu perímetro e área.


#include <stdio.h>
#include <math.h>

int main() {

    float raio, area, perimetro;

    scanf("%f", &raio);

    area = pow(raio, 2) * 3.14;
    perimetro = 2* 3.14 * raio;


    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f",area);
}