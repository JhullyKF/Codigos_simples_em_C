/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int c, temperatura;
    printf("Informe a temperatura em Celsius: ");
    scanf("%d", &c);
    temperatura = (9/5) * c + 32;
    printf("A temperatura em Farenheit é %d", temperatura);
}
