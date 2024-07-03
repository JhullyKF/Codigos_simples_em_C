/******************************************************************************

Escreva uma função que recebe um número inteiro como parâmetro e verifica se ele é um número
perfeito. Um número perfeito é aquele cuja soma de seus divisores (excluindo ele mesmo) é igual a
ele. Em seguida, chame a função para verificar se um número fornecido pelo usuário é perfeito.
*******************************************************************************/

#include <stdio.h>

void verif(int x){
    int cont, i;
    for(i = 1; i<x; i++){
        if(x % i == 0){
            cont += i;
        }
    }
    
    if(cont == x){
        printf("%d é um número perfeito", x);
    } else {
        printf("%d não é um numero perfeito", x);
    }
}

int main()
{
    int num;
    do{
        printf("Digite um valor: ");
        scanf("%d", &num);
    }while(num < 1);
    verif(num);

    return 0;
}