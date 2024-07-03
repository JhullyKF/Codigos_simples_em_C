/******************************************************************************
Antes de o racionamento de energia ser decretado, quase ninguém falava 
emquilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. 
Sabendo-seque 100 quilowatts de energia custa um sétimo do salário mínimo, 
faça um programa quereceba o valor do salário mínimo e a quantidade de 
quilowatts gasta por uma residência eimprima:● o valor em reais de cada 
quilowatt;● o valor em reais a ser pago.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float salMin, valorkW, total;
    int kW;
    printf("Insira o valor do salário mínimo: ");
    scanf("%f", &salMin);
    
    printf("Insira a quantidade de kW: ");
    scanf("%d", &kW);
    
    valorkW = (salMin*1/7)/100;
    
    total = kW * valorkW;
    
    printf("O valor do kW é %.2f, total da conta: %.2f", valorkW, total);
    
}
