/******************************************************************************

Leia do teclado valores para um vetor de 10 elementos inteiros,

pares e positivos. Crie um segundo vetor da seguinte forma: os elementos de

índices pares receberão os respectivos elementos divididos por 2; os
elementos de índices ímpares receberão os respectivos elementos
multiplicados por 3. Imprima os dois vetores.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int vetor1[10];
    int vetor2[10];
    int i;
    
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);
        
        if((vetor1[i]<0) && (vetor1[i] % 2 != 0)){
            printf("Valor inválido. Tente novamente!!");
            printf("Digite um numero: ");
            scanf("%d", &vetor1[i]);
        }
    }
    
    for(i=0; i<10; i++){
        if(i%2==0){
            vetor2[i] = vetor1[i] / 2;
        } else {
            vetor2[i] = vetor1[i] * 3;
        }
        
        printf("posição %d do vetor1: %d\n", i, vetor1[i]);
        printf("posição %d do vetor2: %d\n", i, vetor2[i]);
    }

    return 0;
}
