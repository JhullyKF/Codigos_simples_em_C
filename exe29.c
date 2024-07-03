/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valor;
    int parcela;
    printf("Informe o valor da compra: ");
    scanf("%f", &valor);
    printf("Informe a  quantidade de parcelas: ");
    scanf("%d", &parcela);
    
    switch(parcela){
        case 1: 
            printf("Valor da compra: %.2f", valor);
            break;
        case 2:
            valor = valor * 1.1;
            printf("Valor total da compra: %.2f", valor);
            break;
        case 3: 
            valor = valor * 1.2;
            printf("Valor total da compra: %.2f", valor);
            break;
        default: printf("Dado inválido");
    }

    return 0;
}
