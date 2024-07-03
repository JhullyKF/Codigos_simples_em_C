/******************************************************************************
Escreva um programa que simule a compra de um lanche em uma padaria. O programa deve ser
executado enquanto o cliente informar o que deseja comprar e a quantidade desejada. A cada novo
item inserido na compra, o programa deve mostrar na tela o subtotal a ser pago. Ao final da
execução apresente o valor total da compra.

*******************************************************************************/

#include <stdio.h>
float conta(){
    int cod, qtd, qtd1, qtd2, qtd3;
    float result;
    printf("\n\n Cardapio: \n[01] - Pão \n[02] - Bolo \n [03] - torta \n[0] para encerrar");
    
    do{
        printf("\nDigite o código do item desejado: ");
        scanf("%d", &cod);
        
        switch(cod){
            case 1: printf("Informe a quantidade: "); scanf("%d", &qtd);
                qtd1 += qtd; break;
            case 2: printf("Informe a quantidade: "); scanf("%d", &qtd);
                qtd2 += qtd; break;
            case 3: printf("Informe a quantidade: "); scanf("%d", &qtd);
                qtd3 += qtd; break;
        }
        
        result = (qtd1*0.5) + (qtd2 * 10.00) + (qtd3 * 15.00);
        printf("Valor da compra (subtotal): %.2f", result);
    } while(cod > 0);
    
    printf("Total: %.2f", result);
}
int main()
{
    printf("Seja bem-vindo!");
    conta();

    return 0;
}