/******************************************************************************

Escreva um algoritmo que construa uma matriz de 10 linhas e 15
colunas contendo números inteiros. Em seguida escreva a soma dos
elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
escreva a soma dos elementos de cada coluna e se a soma dos elementos é
par ou ímpar.

*******************************************************************************/

#include <stdio.h>
#define linha 10
#define coluna 15
int main()
{
    int matriz[linha][coluna];
    int l, c, i, soma=0;
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            printf("Digite o %d° número da linha %d: ", c+1, l+1);
            scanf("%d", &matriz[l][c]);
        }

        
    }
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            soma = soma + matriz[l][c];
        }
        if(soma%2==0){
            printf("Soma da %d° = %d — par\n", l+1, soma);
        } else {
            printf("Soma da %d° = %d — ímpar\n",  l+1, soma);
        }
        soma=0;
    }

    return 0;
}
