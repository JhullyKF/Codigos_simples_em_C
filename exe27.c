/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, caso;
    printf("Insira um número: ");
    scanf("%d", &num); 
    caso = num % 2;
    
    switch (caso){
        case 0: printf("É um número par"); break;
        default: printf("É um número ímpar");
    }

    return 0;
}
