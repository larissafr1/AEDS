

//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o
//início do dia.



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora, minuto, minutosPassados;

    scanf("%d", &hora);

    scanf("%d", &minuto);

    minutosPassados = hora * 60 + minuto; 

    printf("%d\n", minutosPassados);
    return 0;
}