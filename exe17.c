/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor, desconto, total;
    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Informe o valor do desconto: ");
    scanf("%f", &desconto);
    total = valor - desconto;
    
    printf("O valor com desconto é %.2f", total);
    
}
