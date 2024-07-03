/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    const float SAL_MIN = 1412.00;
    float sal, result;
    printf("Informe o valor do seu salário: ");
    scanf("%f", &sal);
    result = sal/SAL_MIN;
    printf("Seu salário equivale a %.1f salários mínimos", result);
    
}
