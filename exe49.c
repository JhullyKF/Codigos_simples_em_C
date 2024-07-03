/******************************************************************************
Escreva uma função que recebe três valores reais como parâmetros: nota1, nota2 e nota3,
representando as notas de um aluno em três disciplinas diferentes. A função deve calcular e
retornar a média ponderada das notas, considerando os pesos: peso1 = 2, peso2 = 3 e peso3 = 5.
Em seguida, chame a função e imprima o resultado.

*******************************************************************************/

#include <stdio.h>
double media (float x, float y, float z){
    double result = ((x * 2) + (y * 3) + (z * 5))/(2+3+5);
    return result;
}
float recebe(){
    float nota;
    printf("Digite a nota: ");
    scanf("%f", &nota);
    return nota;
}
int main()
{
    double result;
    float n1 = recebe();
    float n2 = recebe();
    float n3 = recebe();
    result = media(n1, n2, n3);
    printf("Media = %.1lf", result);
    return 0;
}