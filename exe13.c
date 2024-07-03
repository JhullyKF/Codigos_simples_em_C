/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float atualSal, percentAumento, aumento,salAumento;
    printf("Insira seu atual salário: ");
    scanf("%f", &atualSal);
    
    printf("Insira a porcentagem de aumento: ");
    scanf("%f", &percentAumento);
    
    aumento = atualSal * (percentAumento/100);
    salAumento = atualSal + aumento;
    
    printf("O salário sofre aumento de %.2f, ficando %.2f", aumento, salAumento);
    return 0;
}
