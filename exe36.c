/******************************************************************************

Escreva um programa que sorteie aleatoriamente 1000 números
e armazene-os em um vetor. Em seguida, o usuário deve digitar um número e
seu programa deve informar se o número digitado está contido no vetor ou
não. Se estiver, diga em que posições do vetor ele é encontrado.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int vetor[1000];
    int i, num, cont;
    srand(time(NULL));
    
    for(i=0; i<1000; i++){
        vetor[i] = rand() % 1001;
        printf("%d° valor aleatório: %d\n", i+1, vetor[i]);
    }
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    for(i=0; i<1000; i++){
        if(num == vetor[i]){
            cont++;
        }
    }
    if(cont > 0){
        printf("número na lista");
    } else {
        printf("número não encontrado");
    }

    return 0;
}
