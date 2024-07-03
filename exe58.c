/******************************************************************************

 Crie um programa que cadastre em registros o nome, o peso e a altura de 5 
 esportistas. Apresente na tela os dados de cada esportista e seu IMC (deve 
 haver um campo para o IMC no registro)

*******************************************************************************/

#include <stdio.h>
typedef struct {
    char nome[50];
    float peso;
    float altura;
    float imc;
} esportista;

int main()
{
	int i, qtd = 1;
	esportista esp[qtd];
	
	//recebe
	for(i=0; i< qtd; i++){
		printf("======= Recebendo dados do esportista %d =======\n", i+1);
		printf("Insira o nome: ");
		fflush(stdin);
		fgets(esp[i].nome, 50, stdin);
		
		printf("Insira o peso: ");
		scanf("%f", &esp[i].peso);
		
		printf("Insira a altura: ");
		scanf("%f", &esp[i].altura);
		esp[i].imc = esp[i].peso / (esp[i].altura * esp[i].altura);
	}
	//imprime
	for(i=0; i< qtd; i++){
		printf("======= Imprimindo dados do esportista %d =======\n", i+1);
		printf("Nome: %s\n", esp[i].nome);
		
		printf("Peso: %.2f\n", esp[i].peso);
		
		printf("Altura: %.2f\n", esp[i].altura);
		
		printf("IMC: %f\n", esp[i].imc);
	}
    return 0;
}