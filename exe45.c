/******************************************************************************

Crie um programa que calcule XY (X elevado a Y), sendo que os valores de X e Y devem ser números
do tipo double, positivos, informados pelo usuário. O resultado deve ser exibido na tela.


*******************************************************************************/

#include <stdio.h>
#include <math.h>

void conta(double x, double y){
    double result = pow(x, y);
    printf("Resultado = %lf", result);
}
double recebe(){
    double num;
    do{
        printf("Digite um valor: ");
        scanf("%lf", &num);
    }while(num < 0);
    return num;
}
int main()
{
    double x, y;
    x = recebe();
    y = recebe();
    conta(x, y);
    return 0;
}