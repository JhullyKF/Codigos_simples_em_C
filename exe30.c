/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operador;
    printf("Informe o primeiro número: ");
    scanf("%f", &num1);
    printf("Informe o segundo número: ");
    scanf("%f", &num2);
    printf("Informe a operação (+, -, / e *): ");
    scanf(" %c", &operador);
    
    switch(operador){
        case '+': 
            resultado = num1 + num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '/': 
            resultado = num1 / num2;
            printf("resultado: %.2f", resultado);
            break;
        case '*': 
            resultado = num1 * num2;
            printf("resultado: %.2f", resultado);
            break;
        default: printf("Operador inválido");
    }

    return 0;
}
