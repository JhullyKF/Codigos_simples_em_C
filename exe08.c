/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    const float COMISSAO = 0.15;
    char nome;
    float sal, vendas, resultado;
    
    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe seu salário fixo: ");
    scanf("%f", &sal);
    printf("Informe a quantidade de vendas (em dinheiro): ");
    scanf("%f", &vendas);
    
    resultado = sal + vendas*COMISSAO;
    printf("Total a receber: %.2f", resultado);
}
