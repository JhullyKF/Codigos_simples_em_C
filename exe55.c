/******************************************************************************

Crie uma função que preencha um vetor de mil posições com
valores aleatórios de 1 até 6. Conte quantas vezes cada número foi sorteado.
Em seguida, exiba a porcentagem de vezes em que cada número foi sortead

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void qtd(int *vetor){
    int i, procurado, cont = 0;
    float porc;
    for(procurado = 1; procurado<7; procurado++){
        for(i=0; i<1001; i++){
            if(procurado == vetor[i]){
                cont++;
            }
        }
        
        porc = (cont * 100.0) / 1000.0;
        printf("\nO numero %d foi sorteado %d vezes - porcentagem = %.1f", 
         procurado, cont, porc);
        cont=0;
    }
}
int sorteador(){
    int num;
    num = 1 + (rand() % 7);
    return num;
}
int main()
{
    int vetor[1000];
    int i;
    srand(time(NULL));
    for(i=0; i<1001; i++){
        vetor[i] = sorteador();
        printf("valor %d = %d\n", i+1, vetor[i]);
    }
    qtd(vetor);
    return 0;
}