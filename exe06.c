/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char nome;
    float valorHora, qtdHoras, sal;
    
    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe o números de horas trabalhadas: ");
    scanf("%f", &qtdHoras);
    printf("Informe valor recebido por horas: ");
    scanf("%f", &valorHora);
    
    sal = valorHora*qtdHoras;
    printf("O salário é %.2f", sal);
    
}
