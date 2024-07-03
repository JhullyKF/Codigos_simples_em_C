/******************************************************************************

Escreva uma função que recebe uma temperatura em graus Celsius como parâmetro e a converte
para graus Fahrenheit. Em seguida, chame a função e imprima o resultado
*******************************************************************************/

#include <stdio.h>

double conver(int x){
    double result = (x * 1.8) + 32;
    return result;
}
int main()
{
    int temp;
    double conta;
    printf("Digite a temperatura: ");
    scanf("%d", &temp);
    conta = conver(temp);
    printf("%d ºC = %.1lf ºF", temp, conta);
    
    return 0;
}