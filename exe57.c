/******************************************************************************

Escrever um programa para somar duas matrizes de inteiros. Crie
funções separadas para a) ler uma matriz; b) somar duas matrizes; c) imprimir
uma matriz.

*******************************************************************************/

#include <stdio.h>
void imprimir(int tamanho, int matriz[tamanho][tamanho]){
    int c, l;
    for(l = 0; l < tamanho; l++){
        for(c = 0; c < tamanho; c++){
            printf("%d   ", matriz[l][c]);
        }
        printf("\n");
    }
}
void somar(int tamanho, int x[tamanho][tamanho], int y[tamanho][tamanho], 
            int soma[tamanho][tamanho]){
    int c, l;
    for(l = 0; l < tamanho; l++){
        for(c = 0; c < tamanho; c++){
            soma[l][c] = x[l][c] + y[l][c];
            printf("%d\n", soma[l][c]);
        }
    }
    imprimir(tamanho, soma);
}

int ler(int coluna, int linha){
    int valor;
    printf("Digite o valor %d da linha %d: ", coluna, linha);
    scanf("%d", &valor);
    return valor;
}

int main(){
    int tamanho = 3, l, c;
    
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];
    int soma[tamanho][tamanho];
    
    printf("==== Lendo a primeira matriz =====\n");
    for(l = 0; l < tamanho; l++){
        for(c = 0; c < tamanho; c++){
            matriz1[l][c] = ler(c, l);
        }
    }
    
    printf("==== Lendo a segunda matriz =====\n");
    for(l = 0; l < tamanho; l++){
        for(c = 0; c < tamanho; c++){
            matriz2[l][c] = ler(c, l);
        }
    }
    
    somar(tamanho, matriz1, matriz2, soma);
    return 0;
}