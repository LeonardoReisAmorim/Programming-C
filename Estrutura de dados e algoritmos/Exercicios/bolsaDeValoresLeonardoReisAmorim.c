#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct tipo
{
	int id;
	char Nome[21];
	float Preco;
	int Qtd;
	int status;
	struct tipo *prox;
};

typedef struct tipo PapelC;
typedef struct tipo PapelV;

int id=0;

int criarId(){
	id++;
	return id;
}

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
			novo->id = criarId();
			novo->status = 1;
		}else if(novo->Preco > (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->id = criarId();
			novo->status = 1;
		}else{
			aux = l;
			while (aux->prox && novo->Preco < aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->id = criarId();
			novo->status = 1;
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
			novo->id = criarId();
			novo->status = 1;
		}else if(novo->Preco < (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->id = criarId();
			novo->status = 1;
		}else{
			aux = l;
			while (aux->prox && novo->Preco > aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->id = criarId();
			novo->status = 1;
		}
	}
	return l;
}

int comparaNome(char nome1[], char nome2[]){
	int ret=0;
	ret = strcmp(nome1, nome2)==0 ? 1 : 0;
	return ret;
}

void consultar_acoes(PapelC* inicioC,PapelV* inicioV){
	PapelC *referenciaC;
	PapelV *referenciaV;
	
	if(!inicioC && !inicioV){
		printf("\nNao existem acoes de compra e venda disponiveis no momento\n");
	}else{
		if(!inicioC){
			printf("\nNao existem acoes de compra disponiveis no momento\n");
		}else{
			printf("\n=====================================     COMPRA     ==========================================\n");
			for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
				printf("\nNome do papel da compra....:%s\n", referenciaC->Nome);
				printf("\nPreco do papel da compra....:%.2f      Quantidade do papel da compra....:%d", referenciaC->Preco,referenciaC->Qtd);
				printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
		}
		if(!inicioV){
			printf("\nNao existem acoes de venda disponiveis no momento\n");
		}else{
			printf("\n=====================================      VENDA     ==========================================\n");
			for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
				printf("\nNome do papel da venda....:%s\n", referenciaV->Nome);
				printf("\nPreco do papel da venda....:%.2f      Quantidade do papel da venda....:%d", referenciaV->Preco,referenciaV->Qtd);
				printf("\n-----------------------------------------------------------------------------------------------------------------------------------------------------\n");
			}
		}
	}
}
void Transacao(PapelC* inicioC,PapelV* inicioV,int tipo){
	int qtd=0,i=0,j=0,achou=0,achou1=0;
	float media=0;
	PapelC *referenciaC;
	PapelV *referenciaV;
	if(!inicioC || !inicioV){
		printf("\nNao existem acoes disponiveis no momento\n");
	}else{
		for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
			for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
				if(comparaNome(referenciaC->Nome, referenciaV->Nome) && referenciaV->Preco <= referenciaC->Preco){
					if(referenciaV->Qtd < referenciaC->Qtd){
						qtd = referenciaV->Qtd;
						referenciaC->Qtd = referenciaC->Qtd - referenciaV->Qtd;
						referenciaV->Qtd = 0;
						//free(referenciaV);
					}else if(referenciaV->Qtd > referenciaC->Qtd){
						qtd = referenciaC->Qtd;
						referenciaV->Qtd = referenciaV->Qtd - referenciaC->Qtd;
						referenciaC->Qtd = 0;
						//free(referenciaC);
					}else{
						qtd = referenciaV->Qtd;
						referenciaV->Qtd = 0;
						referenciaC->Qtd = 0;
					}
					if(referenciaV->Preco == referenciaC->Preco){
						media = referenciaV->Preco;
					}else{
						media = (referenciaC->Preco - referenciaV->Preco)/2 + referenciaV->Preco;
					}
					printf("\n\ntransacao executada\n\n");
					printf("%d unidades do papel %sforam transacionado por%.2f", qtd, referenciaC->Nome, media);
					achou1=1;
				}else{
					achou=0;
				}
			}
		}
	}
	if(!achou && !achou1 && tipo==1){
		printf("\n\nNao foi possivel realizar a transacao\n\n");
	}else if(tipo==2){
		printf("\noferta de Venda efetuada com sucesso\n");
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
	int i=0,j=0;
	if(!inicioC && !inicioV){
		printf("\nNao existem acoes de compra e venda disponiveis no momento\n");
	}else{
		if(!inicioC || !inicioV){
			printf("\nNao existem acoes de compra ou vendas disponiveis no momento\n");
		}else{
			//for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
			//}
			printf("em andamento");
		}
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
		printf("\ndigite a opcao:\n1 - Carregar as ofertas via arquivo\n2 - Inserir ofertas\n3 - consultar acoes\n5 - ultimo preco da operacao realizada\n0 - Sair\n");
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
			consultar_acoes(listaCompra,listaVenda);
		break;
		//case 4:
		//	opcaoDois=1;
		//	while(opcaoDois){
		//		printf("\ndigite\n1 - comprar\n2 - sair\n");
		//		scanf("%d",&opcaoDois);
		//		if(opcaoDois==1){
		//			printf("\ndigite o nome da acao que deseja comprar: ");
		//			getchar();
		//			fgets(nome,21,stdin);
		//			int TamStr = strlen(nome); 
		//			for(i=0; i<TamStr; i++) {                
		//				nome[i] = toupper (nome[i]);
		//			}
		//			size_t len; 
		//			len = strlen(nome); 
		//			/* alguns "ficheiros de texto" nao tem '\n' na ultima linha */ 
		//			if (nome[len - 1] == '\n') nome[--len] = 0; // remove '\n' e actualiza len
		//			retorn = Transacao(listaCompra,listaVenda, nome);
		//			if(!retorn){
		//				printf("\nNao existe o papel que foi pesquisado\n");
		//			}else if(retorn==2){
		//				printf("\npreco da venda maior que o preco da compra\n");
		//			}
		//		}else if(opcaoDois==2){
		//			opcaoDois=0;
		//		}else{
		//			printf("\nopcao invalida\n");
		//		}
		//	}		
		//break;
		case 5:
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