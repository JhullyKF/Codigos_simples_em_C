/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TAXA_SERVICO 0.1

int main()
{
    float conta, taxa, total;
    printf("Informe o valor da conta: ");
    scanf("%f", &conta);
    
    taxa = conta * TAXA_SERVICO;
    total = taxa + conta;
    printf("O valor da taxa de serviço fica %.2f, total da conta: %.2f", taxa, total);
}
