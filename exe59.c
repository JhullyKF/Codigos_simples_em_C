/*Crie um programa que armazene o resultado de 5 jogos realizados em uma rodada do campeonato
brasileiro de futebol. Para cada jogo, será necessário armazenar as seguintes informações:
a. Data do jogo;
b. Time mandante;
c. Time visitante;
d. Gols do mandante;
e. Gols do visitante.
Depois dos dados informados, o algoritmo deve escrever na tela os dados de cada jogo, indicando quem foi
o vencedor ou se deu empate. Utilize um vetor de registros na sua implementação.*/

#include <stdio.h>
#include <string.h>

typedef struct{
	char data[11];
	char timeMand[20];
	char timeVis[20];
	int golMand;
	int golVis;
	char ganhador[20];
} jogo;

int main(){
	int qtd, i;
	printf("informe a quantidade de jogos: ");
	scanf("%d", &qtd);
	jogo jogo[qtd];
	
	//recebendo
	for(i=0; i<qtd; i++){
		printf("====== Recebendo informacoes do jogo %d ======\n", i+1);
		printf("Insira a data do jogo (dd/mm/aaaa): ");
		fflush(stdin);
		fgets(jogo[i].data, 11, stdin);
		
		printf("Insira o time mandante: ");
		fflush(stdin);
		fgets(jogo[i].timeMand, 20, stdin);
		
		printf("Insira o time visitante: ");
		fflush(stdin);
		fgets(jogo[i].timeVis, 20, stdin);
		
		printf("Insira a quantidade de gols do time mandante: ");
		scanf("%d", &jogo[i].golMand);
		
		printf("Insira a quantidade de gols do time visitante: ");
		scanf("%d", &jogo[i].golVis);
		
		if(jogo[i].golMand > jogo[i].golVis){
			strcpy(jogo[i].ganhador, jogo[i].timeMand);
		} else {
			strcpy(jogo[i].ganhador, jogo[i].timeVis);		}
	}
	
	//imprimindo
	for(i=0; i<qtd; i++){
		printf("====== Imprimindo informacoes do jogo %d ======\n", i+1);
		printf("Data do jogo: %s\n", jogo[i].data);
		
		printf("Time mandante: %s\n", jogo[i].timeMand);
		
		printf("Time visitante: %s\n", jogo[i].timeVis);
		
		printf("Quantidade de gols do time mandante: %d\n", jogo[i].golMand);
		
		printf("Quantidade de gols do time visitante: %d\n", jogo[i].golVis);
		
		printf("Time ganhador: %s\n", jogo[i].ganhador);
	}
}