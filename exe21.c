/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    
    if(num1 > num2){
        printf("O primeiro número é maior");
    }else if(num1 < num2){
        printf("O segundo número é maior");
    } else{
        printf("Os números são inguais");
    }

    return 0;
}
