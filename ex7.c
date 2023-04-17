
//Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo


#include <stdio.h>
#include <math.h>

int main() {
    
    int an, a1, r, n = 5;

    
    scanf("%d", &a1);

    scanf("%d", &r);

    an = r * pow(a1, n - 1); 
    printf("%d\n", an);

    return 0;
}