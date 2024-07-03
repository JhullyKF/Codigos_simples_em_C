/******************************************************************************
Crie um programa que leia um número de 1 a 12 e imprima o nome do mês correspondente.
*******************************************************************************/

#include <stdio.h>
void imprimeMes(int x){
    switch(x){
        case 1: printf("O valor %d corresponde ao mês de janeiro", x); break;
        case 2: printf("O valor %d corresponde ao mês de fevereiro", x); break;
        case 3: printf("O valor %d corresponde ao mês de março", x); break;
        case 4: printf("O valor %d corresponde ao mês de abril", x); break;
        case 5: printf("O valor %d corresponde ao mês de maio", x); break;
        case 6: printf("O valor %d corresponde ao mês de junho", x); break;
        case 7: printf("O valor %d corresponde ao mês de julho", x); break;
        case 8: printf("O valor %d corresponde ao mês de agosto", x); break;
        case 9: printf("O valor %d corresponde ao mês de setembro", x); break;
        case 10: printf("O valor %d corresponde ao mês de outubro", x); break;
        case 11: printf("O valor %d corresponde ao mês de novembro", x); break;
        case 12: printf("O valor %d corresponde ao mês de dezembro", x); break;
        default: printf("valor inválido"); break;
    }
}
int main()
{
    int num;
    printf("digite um valor: ");
    scanf("%d", &num);
    imprimeMes(num);

    return 0;
}