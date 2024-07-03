/*Escreva um programa que recebe nome completo, idade, salário, anos de
experiência na profissão e cargo em uma empresa de N funcionários. Calcule e mostre a
idade média dos funcionários, o nome do funcionário com maior experiência e o cargo do
funcionário com maior salário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
       char nome[50];
       char cargo[20];
       int idade;
       int expe;
       float salario;     
} funcionario;

void receber(funcionario* func, int qtd, int *mediaIdade, int *maiorExpe, float *maiorSal){
	int i;
	for(i=0; i<qtd; i++){
		printf("Nome: ");
		fflush(stdin);
		fgets(func[i].nome, 50, stdin);
		
		printf("Cargo: ");
		fflush(stdin);
		fgets(func[i].cargo, 20, stdin);
		
		printf("Idade: ");
		scanf("%d", &func[i].idade);
		*mediaIdade += func[i].idade;
		
		printf("Experiencia: ");
		scanf("%d", &func[i].expe);
		if(func[i].expe > *maiorExpe){
			*maiorExpe = func[i].expe;
		}
		
		printf("salario: ");
		scanf("%f", &func[i].salario);
		if(func[i].salario > *maiorSal){
			*maiorSal = func[i].salario;
		}
	}
}

int main(){
	int qtd, i, mediaIdade = 0, maiorExpe = 0;
	float maiorSal = 0;
	
	printf("informe a quantidade de funcionarios: ");
	scanf("%d", &qtd);
	
	funcionario func[qtd];
	
	printf("Nome teste1: %s\n", func[0].nome);
	
	receber(func, qtd, &mediaIdade, &maiorExpe, &maiorSal);
	
	/*printf("Nome teste2: %s\n", func[0].nome);
	printf("Maior sal: %f", maiorSal);*/
	
	mediaIdade/=qtd;
	printf("Media idade: %d\n", mediaIdade);
	
	for(i=0; i<qtd; i++){
		if(func[i].salario == maiorSal){
			printf("Maior sal: %.2f - ", maiorSal);
			printf("cargo: %s\n", func[i].cargo);
		}
		
		if(func[i].expe == maiorExpe){
			printf("maior exp: %d - funcionario: %s", func[i].expe, func[i].nome);
		}
	}
	
	
	
}