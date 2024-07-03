/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float sal, aumento;
    printf("Insira o salário: ");
    scanf("%f", &sal);
    
    if(sal <= 1400.00){
        aumento = sal * 1.15;
        printf("Novo salário: %.2f", aumento);
    }else if(sal <= 2000.00){
        aumento = sal * 1.12;
        printf("Novo salário: %.2f", aumento);
    }else if(sal <= 3000.00){
        aumento = sal * 1.1;
        printf("Novo salário: %.2f", aumento);
    }else if(sal <= 3800.00){
        aumento = sal * 1.07;
        printf("Novo salário: %.2f", aumento);
    }else if(sal <= 5000.00){
        aumento = sal * 1.04;
        printf("Novo salário: %.2f", aumento);
    }else{
        printf("Não possui aumento");
    }
    return 0;
}
