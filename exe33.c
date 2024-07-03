/******************************************************************************
Escreva um programa que leia do teclado valores inteiros para

uma matriz de 5 linhas por 5 colunas. Em seguida, leia do teclado um valor

numérico X. Conte quantos valores múltiplos de X existem na matriz e
mostre-os na tela.

*******************************************************************************/

#include <stdio.h>
#define linha 5
#define coluna 5
int main()
{
    int matriz[linha][coluna];
    int num, c, l, cont=0;
    
    printf("Digite o valor de x: ");
    scanf("%d" &num);
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            printf("Digite o %d° valor da linha %d: \n", c+1, l+1);
            scanf("%d", &matriz[l][c]);
        }
        printf("------\n");
    }
    
    for(l=0; l<linha; l++){
        for(c=0; c<coluna; c++){
            if(matriz[l][c] % num == 0){
                cont++;
                printf("%d° número múltiplo de %d = %d", cont, num, matriz[l][c]);
            }
        }
    }

    return 0;
}
