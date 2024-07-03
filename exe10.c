/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    const float PORCENT_COMISSAO = 0.2;
    const int COMISSAO = 5;
    float valorVendas, total;
    int numSapatos;
    
    printf("Informe o valor total das vendas: ");
    scanf("%f", &valorVendas);
    printf("Informe a quantidade de sapatos vendidos: ");
    scanf("%d", &numSapatos);
    
    total = valorVendas*PORCENT_COMISSAO + COMISSAO*numSapatos;
    printf("Salário total: %.2f", total);
}
