/******************************************************************************

Elaborar um programa que apresente como resultado um número positivo, mesmo que a entrada
tenha sido feita com um valor negativo. Use um procedimento com passagem de valor por
referência.


*******************************************************************************/

#include <stdio.h>
void positivo(int *x){
    if(*x<0){
        *x *= -1;
    }
}
int main()
{
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    positivo(&valor);
    printf("Valor = %d", valor);
    return 0;
}