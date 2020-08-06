#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i, achei=0,resultado;

typedef struct dadosjogador{
	char nome[20];
	int idade;
	int ncamisa;
	char posicao[20];
}dadosjogador;

void preenchedados(dadosjogador x[],int y)
{
	for(i=0;i<y;i++){
		printf("\ndigite o nome do jogador:  ");
		scanf("%s",&x[i].nome);
		printf("\ndigite a idade do jogador:  ");
		scanf("%d",&x[i].idade);
		printf("\ndigite o numero da camisa do jogador:  ");
		scanf("%d",&x[i].ncamisa);
		printf("\ndigite a posicao do jogador:  ");
		scanf("%s",&x[i].posicao);
		printf("\n\n");
	}
}

void imprimedados(dadosjogador x[],int y)
{
	for(i=0;i<y;i++){
		printf("\no nome do jogador e: %s",x[i].nome);
		printf("\na idade do jogadore: %d",x[i].idade);
		printf("\no numero da camisa do jogador e: %d",x[i].ncamisa);
		printf("\na posicao do jogador e: %s",x[i].posicao);
		printf("\n\n");
	}
	getchar();
	getchar();
}

void pesquisanome(dadosjogador x[],int y)
{
	char nome[20];
	printf("\ndigite o nome do jogador que queira pesquisar:  ");
	scanf("%s",nome);
	
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].nome,nome);
		if(resultado==0){
			printf("\no nome do jogador e: %s",x[i].nome);
			printf("\na idade do jogadore: %d",x[i].idade);
			printf("\no numero da camisa do jogador e: %d",x[i].ncamisa);
			printf("\na posicao do jogador e: %s",x[i].posicao);
			printf("\n\n");
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\njogador nao encontrado");
	}
	getchar();
	getchar();
}

void pesquisaidade(dadosjogador x[],int y)
{
	int idade;
	printf("\ndigite a idade do jogador:  ");
	scanf("%d",&idade);
	
	for(i=0;i<y;i++){
		if(x[i].idade==idade){
			printf("\no nome do jogador e: %s",x[i].nome);
			printf("\na idade do jogadore: %d",x[i].idade);
			printf("\no numero da camisa do jogador e: %d",x[i].ncamisa);
			printf("\na posicao do jogador e: %s",x[i].posicao);
			printf("\n\n");
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\njogador nao encontrado");
	}
	getchar();
	getchar();
}

void pesquisaposicao(dadosjogador x[],int y)
{
	char posicao[20];
	printf("\ndigite a posicao que deseja pesquisar:  ");
	scanf("%s",&posicao);
	
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].posicao,posicao);
		if(resultado==0){
			printf("\no nome do jogador e: %s",x[i].nome);
			printf("\na idade do jogadore: %d",x[i].idade);
			printf("\no numero da camisa do jogador e: %d",x[i].ncamisa);
			printf("\na posicao do jogador e: %s",x[i].posicao);
			printf("\n\n");
			achei=1;
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\njogador nao encontrado");
	}
	getchar();
	getchar();
}

main()
{
	dadosjogador jogadores[2];
	int ca,op,cc,j=1;
	
	printf("deseja realizar as inscricoes dos 2 jogadores na copa?\n1 - sim\n2 - nao\n");
	scanf("%d",&ca);
	if(ca==1){
		preenchedados(jogadores,2);
		while(j!=0){
		system("cls");
		printf("\ndeseja\n1 - mostrar os jogadores\n2 - pesquisar jogador\n3 - cadastrar novamente\n4 - sair\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				imprimedados(jogadores,2);
			break;
			
			case 2:
				printf("\ndeseja pesquisar por\n1 - nome\n2 - idade\n3 - posicao\n");
				scanf("%d",&cc);
				switch(cc){
					case 1:
						pesquisanome(jogadores,2);
					break;
					
					case 2:
						pesquisaidade(jogadores,2);
					break;
					
					case 3:
						pesquisaposicao(jogadores,2);
					break;
					
					default:
						printf("\npesquisa nao encontrada");
					break;
				}
			break;
			
			case 3:
				preenchedados(jogadores,2);
			break;
			
			case 4:
				j=0;
			break;
			
			default:
				printf("\nopcao nao escolhida");
			break;
		}
		
		}
	}
	else{
		printf("\ninscricoes canceladas");
	}
}
