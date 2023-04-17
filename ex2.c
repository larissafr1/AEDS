// Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um
// algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma
// residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago;
// e o novo valor a ser pago por essa residência com um desconto de 10%.


#include <stdio.h>

int main() {
    float salarioMinimo, qtdKilowatt, precoKilowatt, valorConta, valorComDesconto;

    scanf("%f", &salarioMinimo);

    scanf("%f", &qtdKilowatt);

    precoKilowatt = salarioMinimo / (7 * 100); 
    valorConta = qtdKilowatt * precoKilowatt; 
    valorComDesconto = valorConta * 0.9;

    printf("Valor do kW: %.2f\n", precoKilowatt);
    printf("Valor a pagar: %.2f\n", valorConta);
    printf("Valor com desconto: %.2f\n", valorComDesconto);

    return 0;
}