/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("Insira o valor A: ");
    scanf("%f", &a);
    printf("Insira o valor B: ");
    scanf("%f", &b);
    c = (a + b) * b;
    printf("O resultado da equação C=(A+B)*B é igual a %.2f", c);
}
