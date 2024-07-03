/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float x, result;
    printf("Insira um número: ");
    scanf("%f", &x);
    result = x*x;
    printf("O resultado é %.2f", result);
}
