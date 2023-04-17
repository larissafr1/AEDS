
//Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo

#include <stdio.h>

#include <stdio.h>

int main() {
    int razao, primeiro_termo, decimo_termo;

    scanf("%d", &razao);

    scanf("%d", &primeiro_termo);

    decimo_termo = primeiro_termo + (9 * razao); 

    printf("%d", decimo_termo);

    return 0;
}