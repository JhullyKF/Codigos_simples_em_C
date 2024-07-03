/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    float a, b, c, result;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &a);
    printf("Informe a segunda nota: ");
    scanf("%f", &b);
    printf("Informe a terceira nota: ");
    scanf("%f", &c);
    
    result = (a*2 + b*3 + c*5) / 3;
    printf("A média é %.2f", result);
    
}
