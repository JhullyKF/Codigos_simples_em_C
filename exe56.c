/******************************************************************************

Faça um programa para lançar uma moeda. Quando chamamos
uma função, ela deve retornar cara ou coroa (pode ser representado como 0 e
1). Em outra função, faça n lançamentos de moedas, em que n é o valor que o
usuário quiser, e mostre a porcentagem de vezes em que deu cara e em que
deu coroa. Se você jogar a moeda 10, 100, 1000, um milhão de vezes...o que
tende a acontecer?

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void freq(int vetor[], int tamanho){
    int procurado, i, cont = 0;
    float porc;
    
    for(procurado = 0; procurado < 2; procurado++){
        for(i = 0; i < tamanho; i++){
            if(procurado == vetor[i]){
                cont++;
            }
        }
        porc = (cont * 100) / tamanho;
        printf("Quantidade de vezes que caiu %d: %d - percentual = %.1f\n", 
         procurado, cont, porc);
        cont = 0;
    }
}
int sorteador(){
    int num;
    num = rand() % 2;
    return num;
}
int main()
{
    int n, i;
    
    printf("Digite quantas vezes quer lançar a moeda: ");
    scanf("%d", &n);
    
    int vetor[n];
    srand(time(NULL));
    for(i=0; i<n; i++){
        vetor[i] = sorteador();
        if(vetor[i] == 1){
           printf("%dº tentativa: Coroa\n", i+1); 
        } else {
            printf("%dº tentativa: Cara  \n", i+1);
        }
    }
    freq(vetor, n);
    return 0;
}