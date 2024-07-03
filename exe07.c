/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    const float VALORCARRO = 20.00;
    const float VALORKM = 0.15;
    float km, resultado;
    int dias;
    
    printf("Informe a quantidade de km percorrido: ");
    scanf("%f", &km);
    printf("Informe a quantidade de dias pelos quais ele foi alugado: ");
    scanf("%d", &dias);
    
    resultado = VALORKM*km + VALORCARRO*dias;
    printf("Valor a pagar: %.2f", resultado);
}
