/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float preco, desconto;
    printf("Insira o valor: ");
    scanf("%f", &preco);
    
    if(preco > 500.00){
        desconto = preco * (1 - 0.15);
        printf("Valor com desconto: %.2f", desconto);
    } else if(preco >= 200.00 && preco <= 499.99){
        desconto = preco * (1.0 - 0.1);
        printf("Valor com desconto: %.2f", desconto);
    }else{
        desconto = preco * (1.0 - 0.05);
        printf("Valor com desconto: %.2f", desconto);
    }
    return 0;
}
