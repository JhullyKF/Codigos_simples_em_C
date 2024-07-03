/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Insira um número positivo ou negativo: ");
    scanf("%d", &n);
    
    if(n < 0){
        n = n * -1;
    }
    
    printf("O número é %d", n);

    return 0;
}
