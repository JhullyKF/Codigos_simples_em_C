/*Suponha que um banco permita no máximo 5 transações enviadas por PIX em um dia. Construa um
programa que receba do teclado o saldo disponível na conta do cliente. Em seguida, cadastre os
dados de cada um dos 5 PIX enviados (chave e valor). A cada PIX cadastrado, apresente o saldo
atual da conta do cliente. Caso o cliente não tenha dinheiro suficiente para enviar o PIX, exiba uma
mensagem de erro e não faça a transação. Ao final, imprima os dados das transações e o saldo da
conta do cliente.*/

#include <stdio.h>
typedef struct {
	char chave[30];
	float valor;
}pix;
int main(){
	int qtd = 1, i;
	pix pix[qtd];
	float saldo = 200.00;
	
	//recebendo pix
	for(i=0;i<qtd;i++){
		printf("======= Recebendo o pix numero %d ======\n", i+1);
		printf("Informe a chave do pix: ");
		fflush(stdin);
		fgets(pix[i].chave, 30, stdin);
		
		do{
			printf("Insira o valor para transacao: ");
			scanf("%f", &pix[i].valor);
			
			if(saldo < (saldo - pix[i].valor)){
			printf("Saldo insuficiente!");
			} else {
			printf("Pix realizado!\n");
			saldo -= pix[i].valor;
			}
			
		} while (saldo < pix[i].valor);
		
		printf("Saldo atual: %.2f\n\n", saldo);
	}
	
	//imprimindo extrato
	for(i=0;i<qtd;i++){
		printf("====== Informacoes do pix numero %d ======\n", i+1);
		printf("Chave pix: %s\n", pix[i].chave);
		printf("Valor da transferencia: %.2f\n", pix[i].valor);
		
		printf("Saldo atual: %.2f\n", saldo);
	}
}