/******************************************************************************

Elaborar um módulo que apresente a mensagem "Este valor é divisível por 2 ou 3". Deve ser
solicitado pelo programa principal o valor a ser verificado. Caso o valor não atenda à condição
desejada, o módulo deve apresentar a mensagem "Valor inválido".

*******************************************************************************/

#include <stdio.h>

void verif(int num){
        if((num % 2 == 0) || (num % 3 == 0)){
            printf("Este valor é divisível por 2 ou 3");
        } else {
            printf("valor inválido");
        }
}
int main()
{
    int num;
    printf("Digite um valor: ");
    scanf("%d", &num);
    verif(num);
    return 0;
}