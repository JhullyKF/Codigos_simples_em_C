/******************************************************************************

Escreva um algoritmo que construa uma matriz de 10 linhas e 15
colunas contendo números inteiros. Em seguida escreva a soma dos
elementos de cada linha e se a soma dos elementos é par ou ímpar. Por fim,
escreva a soma dos elementos de cada coluna e se a soma dos elementos é
par ou ímpar.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matriz[10][15];
    int linha, coluna, i, soma=0;
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<15; coluna++){
            printf("Digite o %d° número da linha %d: ", coluna+1, linha+1);
            scanf("%d", &matriz[linha][coluna]);
        }

        
    }
    
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<15; coluna++){
            soma = soma + matriz[linha][coluna];
        }
        if(soma%2==0){
            printf("Soma da %d° = %d — par", linha+1, soma);
        } else {
            printf("Soma da %d° = %d — ímpar",  linha+1, soma);
        }
        soma=0;
    }

    return 0;
}
