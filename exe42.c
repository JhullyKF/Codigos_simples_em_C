/******************************************************************************
Uma empresa possui três lojas, cada uma com 6 funcionários. Escreva um programa que forneça à 
gerência algumas informações relativas aos salários dos funcionários dessa empresa. Os salários 
devem ser armazenados em uma matriz bidimensional (loja X funcionário). O programa deve:
a. preencher a matriz de salários por leitura do teclado;
b. imprimir os salários de todos os funcionários, identificando qual a loja em que trabalha;
c. imprimir o total pago em salários por loja;
d. informar quantos funcionários recebem salário superior a R$ 2.000,00 na primeira loja;
e. informar a média salarial da segunda loja.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float matriz[3][6];
    float soma, media;
    int linha, coluna, cont;
    for(linha=0; linha<3;linha++){
        for(coluna=0; coluna<6; coluna++){
            printf("Digite o salario do funcionario %d na loja %d: ", coluna+1, linha+1);
            scanf("%f", &matriz[linha][coluna]);
        }
    }
    
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<6; coluna++){
            printf("\nSalario do funcionario %d na loja %d: %.2f", coluna+1, linha+1, matriz[linha][coluna]);
        
            if((linha==0)&&(matriz[linha][coluna] > 2000.00)){
                cont++;
            } else if(linha==1){
                media+=matriz[linha][coluna];
            }
        }
    }
    printf("\nQuantidade de funcionarios da loja 1 que possuem salario superior a 2000: %d", cont);
    media = media / 6;
    printf("\nMedia dos salarios da loja 2: %.2f", media);
    for(linha=0; linha<3; linha++){
        for(coluna=0; coluna<6; coluna++){
            soma+=matriz[linha][coluna];
        }
        printf("\nTotal salarios da loja %d: %.2f", linha+1, soma);
        soma=0;
    }
    
    
    

    return 0;
}
