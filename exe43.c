/******************************************************************************

Escreva um programa que exiba o quadrado de um número digitado no teclado.
Escreva uma função para ler esse número e um procedimento para calcular seu quadrado.

*******************************************************************************/

#include <stdio.h>
void quadrado(int x){
    printf("Quadrado de %d = %d", x, x*x);
}
int recebe(){
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);
    return num;
}
int main()
{
    int a = recebe();
    quadrado(a);

    return 0;
}