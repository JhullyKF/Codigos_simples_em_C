/******************************************************************************
Faça um programa que efetue o cálculo do salário líquido de um professor.
Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e 
percentualde desconto do INSS.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float valorHora, percentINSS, salBruto, desc;
    int numAulas;
    printf("Insira o valor da hora da aula: ");
    scanf("%f", &valorHora);
    
    printf("Insira o número de aulas: ");
    scanf("%d", &numAulas);
    
    printf("Insira o percentual de desconto do INSS: ");
    scanf("%f", &percentINSS);
    
    desc = (valorHora*numAulas) * (percentINSS/100);
    salBruto = valorHora*numAulas - desc;
    printf("O salário bruto é %.2f", salBruto);
    
}
