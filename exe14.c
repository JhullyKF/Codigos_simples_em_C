/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valorDevido, total;
    int atraso, multa;
    printf("Insira o valor devido: ");
    scanf("%f", &valorDevido);
    
    printf("Informe a quantidade de dias em atraso: ");
    scanf("%d", &atraso);
    
    printf("Insira o percentual de multa por dia de atraso: ");
    scanf("%d", &multa);
    
    total = valorDevido + (atraso*(multa/100));
    
    printf("O total é %.2f", total);
}
