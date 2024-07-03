/******************************************************************************

Escreva um programa que some dois números.
Esse programa deve conter uma função que leia os números do teclado e um procedimento que realize a
soma.

*******************************************************************************/

#include <stdio.h>
void soma(int x, int y){
    printf("Soma = %d", x+y);
}
int recebe(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    return num;
}
int main()
{
    int a, b;
    a = recebe();
    b = recebe();
    soma(a, b);
    
    return 0;
}