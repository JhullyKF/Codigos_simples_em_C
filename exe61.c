/*
Elaborar um programa que armazene o nome e a altura de 10 pessoas com o uso de registros. O
programa deve usar um menu que execute as seguintes etapas:
a. Cadastrar os 10 registros;
b. Apresentar os registros (nome e altura) das pessoas com 1.50 m ou menores;
c. Apresentar os registros (nome e altura) das pessoas com mais de 1.50 m;
d. Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m e menos de 1.80 m;
e. Calcular a média das alturas e apresentar os registros (nome e altura) das pessoas que estão acima da média
*/

#include <stdio.h>
typedef struct{
	char nome[50];
	float altura;
} pessoa;


int main(){
	int qtd = 5, i;
	float media;
	pessoa pessoa[qtd];
	
	//recebe
	for(i=0; i < qtd; i++){
		printf("======== Recebendo o registro numero %d ========\n", i+1);
		printf("Insira o nome: ");
		fflush(stdin);
		fgets(pessoa[i].nome, 50, stdin);
		
		printf("Insira a altura: ");
		scanf("%f", &pessoa[i].altura);
		media += pessoa[i].altura;
	}
	
	printf("======== Pessoas com 1.50 m ou menores =========\n");
	for(i=0; i < qtd; i++){
		if(pessoa[i].altura <= 1.50){
			printf("Nome: %s\n", pessoa[i].nome);
			printf("Altura: %.2f\n", pessoa[i].altura);
		}
	}
	
	printf("======== Pessoas com mais de 1.50 m =========\n");
	for(i=0; i < qtd; i++){
		if(pessoa[i].altura > 1.50){
			printf("Nome: %s\n", pessoa[i].nome);
			printf("Altura: %.2f\n", pessoa[i].altura);
		}
	}
	
	printf("======== Pessoas com mais de 1.5 m e menos de 1.80 m =========\n");
	for(i=0; i < qtd; i++){	
		if((pessoa[i].altura > 1.50) && (pessoa[i].altura < 1.80)){
			printf("Nome: %s\n", pessoa[i].nome);
			printf("Altura: %.2f\n", pessoa[i].altura);
		}
	}
	
	media/qtd;
	printf("======== Pessoas que estão acima da média =========\n");
	for(i=0; i < qtd; i++){
		if(pessoa[i].altura > media){
			printf("Nome: %s\n", pessoa[i].nome);
			printf("Altura: %.2f\n", pessoa[i].altura);
		}
	}
}