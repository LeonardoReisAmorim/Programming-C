#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct tipo
{
	int ultimaCotacao;
	char Nome[21];
	float Preco;
	int Qtd;
	int status;
	struct tipo *prox;
};

typedef struct tipo PapelC;
typedef struct tipo PapelV;

PapelC* CadastrarCompra(PapelC* l, float preco, int qtd, char nome[]){
	PapelC* novo= malloc(sizeof(PapelC));
	PapelC* aux;
	if(novo){
		novo->Preco = preco;
		novo->Qtd = qtd;
		strcpy(novo->Nome,nome);
		if(l == NULL){
			novo->prox = NULL;
			l = novo;
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}else if(novo->Preco > (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}else{
			aux = l;
			while (aux->prox && novo->Preco < aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}
	}
	return l;
}

PapelV* CadastrarVenda(PapelV* l, float preco, int qtd, char nome[]){
	PapelV* novo= malloc(sizeof(PapelV));
	PapelV* aux;
	if(novo){
		novo->Preco = preco;
		novo->Qtd = qtd;
		strcpy(novo->Nome,nome);
		if(l == NULL){
			novo->prox = NULL;
			l = novo;
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}else if(novo->Preco < (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}else{
			aux = l;
			while (aux->prox && novo->Preco > aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->status = 1;
			novo->ultimaCotacao = 0;
		}
	}
	return l;
}

int comparaNome(char nome1[], char nome2[]){
	int ret=0;
	ret = strcmp(nome1, nome2)==0 ? 1 : 0;
	return ret;
}

void consultarAcoesCompra(PapelC* inicioC){
	PapelC *referenciaC;
	printf("\n=================================== COMPRA =====================================\n");
	printf("\n******************************************************************");
	if(!inicioC){
		printf("\nNao existem acoes de compra disponiveis no momento\n");
	}else{
		printf("\n Nome da compra  | Preco da compra | Quantidade da compra");
		for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
			if(referenciaC->status){
				printf("\n	%s	 |", referenciaC->Nome);
				printf("	%.2f      |", referenciaC->Preco);
				printf("	%d",	referenciaC->Qtd);
			}
		}
	}
	printf("\n******************************************************************");
	printf("\n");
}

void consultarAcoesVenda(PapelV* inicioV){
	PapelV *referenciaV;
	printf("\n=================================== VENDA =====================================\n");
	printf("\n******************************************************************");
	if(!inicioV){
		printf("\nNao existem acoes de venda disponiveis no momento\n");
	}else{
		printf("\n Nome da venda  | Preco da venda | Quantidade da venda");
		for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
			if(referenciaV->status){
				printf("\n	%s	|", referenciaV->Nome);
				printf("	%.2f 	 |", referenciaV->Preco);
				printf("	%d",	referenciaV->Qtd);
			}
			
		}
	}
	printf("\n******************************************************************");
	printf("\n");
}

void Transacao(PapelC* inicioC,PapelV* inicioV,int tipo){
	int qtd=0,i=0,j=0,achou=0,achou1=0;
	float media=0;
	PapelC *referenciaC;
	PapelV *referenciaV;
	for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
		for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
			if(comparaNome(referenciaC->Nome, referenciaV->Nome) && referenciaC->status && referenciaV->status && (referenciaV->Preco <= referenciaC->Preco)){
				if(referenciaV->Qtd < referenciaC->Qtd){
					qtd = referenciaV->Qtd;
					referenciaC->Qtd = referenciaC->Qtd - referenciaV->Qtd;
					referenciaV->Qtd = 0;
					referenciaV->status = 0;
					referenciaV->ultimaCotacao = 1;
				}else if(referenciaV->Qtd > referenciaC->Qtd){
					qtd = referenciaC->Qtd;
					referenciaV->Qtd = referenciaV->Qtd - referenciaC->Qtd;
					referenciaC->Qtd = 0;
					referenciaC->status = 0;
					referenciaC->ultimaCotacao = 1;
				}else{
					qtd = referenciaV->Qtd;
					referenciaV->Qtd = 0;
					referenciaC->Qtd = 0;
					referenciaC->status = 0;
					referenciaV->status = 0;
					referenciaC->ultimaCotacao = 1;
					referenciaV->ultimaCotacao = 1;
				}
				if(referenciaV->Preco == referenciaC->Preco){
					media = referenciaV->Preco;
				}else{
					media = (referenciaC->Preco - referenciaV->Preco)/2 + referenciaV->Preco;
				}
				printf("\n\ntransacao executada\n\n");
				printf("\n%d unidades do papel %s foram transacionado por %.2f\n", qtd, referenciaC->Nome, media);
				achou1=1;
				break;
			}else{
				achou=0;
			}
		}
	}
	if(!achou && !achou1 && tipo==1){
		printf("\nOferta de Compra efetuada com sucesso\n");
	}else if(tipo==2){
		printf("\nOferta de Venda efetuada com sucesso\n");
	}
}

int contaCompras(){
	FILE *f;
	char Nome[21];
	float Preco;
	int Qtd, i=0;
	f = fopen("inserirCompra.txt", "rt");
	if(!f){
		printf("\n\nproblema na abertura do arquivo\n\n");
		return 0;
	}
	while (fscanf(f, "%f %d %s", &Preco, &Qtd, Nome) != EOF){
		i++;
	}
	fclose(f);
	return i;
}

int contaVendas(){
	FILE *f;
	char Nome[21];
	float Preco;
	int Qtd, i=0;
	f = fopen("inserirVenda.txt", "rt");
	if(!f){
		printf("\n\nproblema na abertura do arquivo\n\n");
		return 0;
	}
	while (fscanf(f, "%f %d %s", &Preco, &Qtd, Nome) != EOF){
		i++;
	}
	fclose(f);
	return i;
}

void carregaCompras(float *preco, int *qtd, char nome[][21], int cont){
	FILE *f;
	char Nome[21];
	float Preco;
	int Qtd, i=0;
	f = fopen("inserirCompra.txt", "rt");
	if(!f){
		printf("\n\nproblema na abertura do arquivo\n\n");
		return;
	}
	while (fscanf(f, "%f %d %s", &Preco, &Qtd, Nome) != EOF && i<cont){
		preco[i]= Preco;
		qtd[i] = Qtd;
		strcpy(nome[i],Nome);
		i++;
	}
	fclose(f);
}

void carregaVendas(float *preco, int *qtd, char nome[][21], int cont){
	FILE *f;
	char Nome[21];
	float Preco;
	int Qtd, i=0;
	f = fopen("inserirVenda.txt", "rt");
	if(!f){
		printf("\n\nproblema na abertura do arquivo\n\n");
		return;
	}
	while (fscanf(f, "%f %d %s", &Preco, &Qtd, Nome) != EOF && i<cont){
		preco[i]= Preco;
		qtd[i] = Qtd;
		strcpy(nome[i],Nome);
		i++;
	}
	fclose(f);
}

void ultimoPrecoOperacao(PapelC* inicioC,PapelV* inicioV){
	PapelC *referenciaC;
	PapelV *referenciaV;
	int i=0,j=0,aux=0;
	if(!inicioC && !inicioV){
		printf("\nNao existem acoes de compra e venda disponiveis no momento\n");
	}else{
		if(!inicioC || !inicioV){
			printf("\nNao existem acoes de compra ou vendas disponiveis no momento\n");
		}else{
			for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
				if(referenciaC->ultimaCotacao){
					printf("\n%s  |", referenciaC->Nome);
					printf("   %.2f", referenciaC->Preco);
					j=1;
				}else{
					i=1;
				}
			}
			if(j){
				printf("\nUltimo preco da cotacao de compra\n");
			}
			if(!inicioV){
				printf("\nNao existem acoes de venda disponiveis no momento\n");
			}else{
				for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
						if(referenciaV->ultimaCotacao){
							printf("\n%s  |", referenciaV->Nome);
							printf("   %.2f", referenciaV->Preco);
							j=2;
						}else{
							i=1;
						}
				}
				if(j==2){
					printf("\nUltimo preco da cotacao de venda\n");
				}
			}
		}
	}
	if(i && !j){
		printf("\nNao houve ultimo preco de cotacao\n");
	}
}

int main() {
	int opcao=-1, qtd=0,opcaoDois=1,retorn=0,retornContaCompra=0,retornContaVenda=0,i=0,TamStr=0;
	float Preco=0;
	char nome[21];
	PapelC *listaCompra;
	PapelV *listaVenda;
	listaCompra = NULL;
	listaVenda = NULL;
	retornContaCompra = contaCompras();
	float precoC[retornContaCompra];
	int qtdC[retornContaCompra];
	char nomeC[retornContaCompra][21];

	retornContaVenda = contaVendas();
	float precoV[retornContaVenda];
	int qtdV[retornContaVenda];
	char nomeV[retornContaVenda][21];
	

	while (opcao!=0){
		printf("\ndigite a opcao:\n1 - Carregar as ofertas via arquivo\n2 - Inserir ofertas\n3 - consultar acoes\n4 - ultimo preco da operacao realizada\n0 - Sair\n");
		scanf("%d",&opcao);
		printf("\n---------------------------------------------------------------------------------\n");
		switch (opcao){
		case 1:
			if(!retornContaVenda && !retornContaCompra){
				printf("nao existe dados nos arquivos, favor adicione dados");
			}else{
				carregaCompras(precoC, qtdC, nomeC, retornContaCompra);
				for(i=0;i<retornContaCompra;i++){
					listaCompra = CadastrarCompra(listaCompra, precoC[i], qtdC[i], nomeC[i]);
				}
				carregaVendas(precoV, qtdV, nomeV, retornContaVenda);
				for(i=0;i<retornContaVenda;i++){
					listaVenda = CadastrarVenda(listaVenda, precoV[i], qtdV[i], nomeV[i]);
				}
				printf("\nCarregamento efetuado com sucesso, por favor selecione consultar acoes para listar\n");
			}
		break;
		case 2:
			opcaoDois=1;
			while(opcaoDois){
				printf("\ndigite a opcao:\n1 - Inserir oferta de Compra\n2 - Inserir oferta de Venda\n3 - sair\n");
				scanf("%d",&opcaoDois);
				if(opcaoDois==1){
					printf("\ndigite o nome do papel para compra......:\n");
					getchar();
					fgets(nome, 21, stdin);
					printf("\ndigite o preco do papel para compra.....: \n");
					scanf("%f",&Preco);
					printf("\ndigite a quantidade do papel para compra.....: \n");
					scanf("%d",&qtd);
					TamStr = strlen(nome); 
					for(i=0; i<TamStr; i++) {                
						nome[i] = toupper (nome[i]);
					}
					size_t len; 
					len = strlen(nome); 
					if (nome[len - 1] == '\n') nome[--len] = 0;
					listaCompra = CadastrarCompra(listaCompra, Preco, qtd, nome);
					Transacao(listaCompra,listaVenda,opcaoDois);
				}else if(opcaoDois==2){
					printf("\ndigite o nome do papel para venda......:\n");
					getchar();
					fgets(nome, 21, stdin);
					printf("\ndigite o preco do papel para venda.....: \n");
					scanf("%f",&Preco);
					printf("\ndigite a quantidade do papel para venda.....: \n");
					scanf("%d",&qtd);
					TamStr = strlen(nome); 
					for(i=0; i<TamStr; i++) {                
						nome[i] = toupper (nome[i]);
					}
					size_t len; 
					len = strlen(nome); 
					if (nome[len - 1] == '\n') nome[--len] = 0;
					listaVenda = CadastrarVenda(listaVenda, Preco, qtd, nome);
					Transacao(listaCompra,listaVenda,opcaoDois);
				}else if(opcaoDois==3){
					opcaoDois=0;
				}else{
					printf("\nopcao invalida\n");
				}
			}
			break;
		case 3:
			opcaoDois=1;
			while(opcaoDois){
				printf("\ndigite a opcao:\n1 - Consultar acoes de compra\n2 - Consultar acoes de venda\n3 - sair\n");
				scanf("%d",&opcaoDois);
				if(opcaoDois==1){
					consultarAcoesCompra(listaCompra);
				}else if(opcaoDois==2){
					consultarAcoesVenda(listaVenda);
				}else if(opcaoDois==3){
					opcaoDois=0;
				}else{
					printf("\nopcao invalida\n");
				}
			}
		break;
		case 4:
			ultimoPrecoOperacao(listaCompra,listaVenda);
		break;
		case 0:
			printf("saindo..\n");
			opcao=0;
		break;
		default:
			printf("\nopcao invalida\n");
			break;
		}
	}
    return 0;
}