/*Escreva um programa, utilizando estrutura, que atende os itens abaixo:
a. O programa recebe e armazena o nome de N cidades com renda per capita,
IDH (índice de desenvolvimento humano) e população. O usuário fornece a
quantidade de cidades N e as demais informações.
b. Calcular e mostrar a média da renda per capita das N cidades.
c. Determinar e mostrar o nome da cidade com maior população.
d. Mostre a renda per capita, IDH e população de acordo com o nome de uma
cidade digitada pelo usuário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char nome[30];
	float renda;
	float idh;
	int populacao;
}cidade;

void mostrar(cidade* cid, int qtd){
	int i;
	char procurado[30];
	do{
		printf("Digite o nome da cidade para acessar os dados [aperte ENTER para sair]: ");
		fflush(stdin);
		fgets(procurado, 30, stdin);
		
		for(i=0; i < qtd; i++){
			if(strcmp(procurado, cid[i].nome) == 0){
				printf("Nome: %s", cid[i].nome);
				printf("Renda: %.2f\n", cid[i].renda);
				printf("IDH: %.1f\n", cid[i].idh);
				printf("Populacao: %d\n", cid[i].populacao);
			}
		}
	} while (strcmp(procurado, "\0") == 0);
}
void receber(cidade* cid, int qtd, int *maiorPop, float *mediaRenda){
	int i;
	for(i=0; i<qtd; i++){
		printf("====== recebendo dados da cidade %d ======\n", i+1);
		printf("Nome: ");
		fflush(stdin);
		fgets(cid[i].nome, 30, stdin);
		
		printf("Renda: ");
		scanf("%f",  &cid[i].renda);
		*mediaRenda += cid[i].renda; 
		
		printf("IDH: ");
		scanf("%f",  &cid[i].idh);
		
		printf("Populacao: ");
		scanf("%d",  &cid[i].populacao);
		if(cid[i].populacao > *maiorPop){
			*maiorPop = cid[i].populacao;
		}
	}
	
}

int main(){
	int i, qtd, maiorPop=0;
	float mediaRenda=0;
	
	printf("Informe a quantidade de cidades: ");
	scanf("%d", &qtd);
	
	cidade cid[qtd];
	
	receber(cid, qtd, &maiorPop, &mediaRenda);
	
	mediaRenda /= qtd;
	printf("Media da renda: %.2f\n", mediaRenda);
	for(i=0; i<qtd; i++){
		if(cid[i].populacao == maiorPop){
			printf("Cidade com maior populacao: %s\n", cid[i].nome);
		}
	}
	
	mostrar(cid, qtd);
}