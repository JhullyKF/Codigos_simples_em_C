/******************************************************************************

Um estabelecimento fará uma promoção com descontos nos produtos A e B. Se forem comprados
apenas os produtos A ou apenas os produtos B, o desconto será de 10%. Caso sejam comprados os
produtos A e B, o desconto será de 15%. O custo de cada produto é, respectivamente, para os
produtos A e B, R$10 e R$20. Elaborar um programa que, por meio de módulos, calcule e apresente
o valor da despesa do freguês na compra dos produtos. Lembre-se de que o freguês pode levar mais
de uma unidade de um determinado produto.

*******************************************************************************/

#include <stdio.h>
void conta(int x, int y){
    float  result, valorA = 10, valorB = 20;
    
    if((x > 0) && (y > 0)){
        result = (x * valorA + y * valorB) * (1 - 0.15);
        
    } else if((x > 0) || (y > 0)){
        result = (x * valorA + y * valorB) * (1 - 0.1);
    } else {
        result = x * valorA + y * valorB;
    }
    printf("Total da compra: %f", result);
}
int recebeQTD(){
    int num;
    printf("\nInforme a quantidade do produto: ");
    scanf("%d", &num); 
    return num;
}
int main()
{
    int qtdA, qtdB;
    printf("====Produto A====");
    qtdA = recebeQTD();
    printf("====Produto B====");
    qtdB = recebeQTD();
    conta(qtdA, qtdB);
    return 0;
}