/******************************************************************************

Escreva um programa que construa uma matriz de 5 linhas por 5

colunas de números reais e coloque o conteúdo de sua diagonal principal

dentro de um vetor e o imprima.
*******************************************************************************/

#include <stdio.h>
#define linha 5
#define coluna 5

int main()
{
    float matriz[linha][coluna];
    float vetor[coluna];
    int c, l;
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            printf("Digite o valor da %d° coluna da linha %d: \n", c+1, l+1);
            scanf("%f", &matriz[l][c]);
        }
        printf("-------\n");
    }
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            if(c==l){
                vetor[c]=matriz[l][c];
            }
        }
        printf("%d° numero da diagonal: %.2f\n",l+1, vetor[l]);
    }
    

    return 0;
}
