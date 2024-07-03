/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float largura, profundidade, area, potencia;
    
    printf("Insira a largura do cômodo: ");
    scanf("%f", &largura);
    
    printf("Insira a profundidade: ");
    scanf("%f", &profundidade);
    
    area = largura * profundidade;
    potencia = (largura * profundidade) * 18;
    
    printf("Na area de %.2f, é necessário %.2fW de potencia", area, potencia);

    return 0;
}
