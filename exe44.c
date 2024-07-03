/******************************************************************************

Desenvolva um programa que leia dois valores inteiros para armazenamento nas variáveis a e b.
Efetue a troca dos valores, de forma que a variável a passe a possuir o valor da variável b e a variável b
passe a possuir o valor da variável a.
Apresente os valores das variáveis a e b após o processamento da troca

*******************************************************************************/
#include <stdio.h>
void troca(int x, int y){
    int z = x;
    x = y;
    y = z;
    printf("\na = %d e b = %d", x, y);
}
int recebe(){
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);
    return num;
}
int main()
{
    int a, b;
    a = recebe();
    b = recebe();
    printf("a = %d e b = %d", a, b);
    troca(a, b);
    return 0;
}
