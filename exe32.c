/******************************************************************************

Escreva um programa que gere uma matriz de inteiros de 4 linhas

por 4 colunas e crie sua transposta (matriz transposta é toda a matriz onde são

trocadas as linhas pelas colunas ou vice-versa).

*******************************************************************************/

#include <stdio.h>
#define linha 4
#define coluna 4

int main()
{
    int matriz[linha][coluna];
    int matrizTrans[linha][coluna];
    int c, l, c2=coluna-1, l2=linha-1;
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            printf("Digite o %d valor da linha %d: \n", c+1, l+1);
            scanf("%d", &matriz[l][c]);
        }
        printf("-------\n");
    }
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            matrizTrans[l][c]=matriz[c][l];
            printf("matrizTrans = l: %d - c: %d - r %d \n", l+1, c+1, matrizTrans[l][c]);
        }
        
    }
    return 0;
}
