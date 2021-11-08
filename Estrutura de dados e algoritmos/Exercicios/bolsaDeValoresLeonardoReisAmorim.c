#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo
{
	int id;
	char Nome[21];
	float Preco;
	int Qtd;
	struct tipo *prox;
};

typedef struct tipo Papel;

// cria o inicio da lista
Papel *inicio=NULL;
int id=0;
//Cadastrar V, Comprar V, Listar V, Excluir F

Papel* Cadastrar(Papel* l, float preco, int qtd, char nome[]){
	Papel* novo= malloc(sizeof(Papel));
	Papel* aux;
	if(novo){
		novo->Preco = preco;
		novo->Qtd = qtd;
		strcpy(novo->Nome,nome);
		if(l == NULL){
			novo->prox = NULL;
			l = novo;
		}else if(novo->Preco < (l)->Preco){
			novo->prox = l;
			l = novo; 
		}else{
			aux = l;
			while (aux->prox && novo->Preco > aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
		}
	}
	return l;
}

void consultar_acoes(Papel* inicio){
	Papel *referencia;
	for(referencia= inicio;referencia!= NULL; referencia=referencia->prox){
		printf("\nNome do papel....:%s\t", referencia->Nome);
		printf("\nPreco do papel....:%.2f\tQuantidade do papel....:%d\n", referencia->Preco,referencia->Qtd);
		printf("\n---------------------------------------------------------------------------------\n");
	}
}

int Comprar(Papel* p, char nome[]){
	int flag=0,flag2=0,qtd=0;
	float media=0,preco=0;
	Papel *referencia;
	//o valor da transação seria a *média entre os dois valores*
	for(referencia= p;referencia!= NULL; referencia=referencia->prox){
		if(strcmp(referencia->Nome, nome)==0){
			printf("\nPreco da venda....:%.2f                        Quantidade da venda....:%d\n", referencia->Preco,referencia->Qtd);
			printf("\nqual preco que deseja comprar....: ");
			scanf("%f",&preco);
			if(preco >= referencia->Preco){
				printf("\nQuantas acoes(quantidade) da %sVoce quer comprar......: ",referencia->Nome);
				scanf("%d",&qtd);
				if(referencia->Qtd <= qtd){
					printf("\nCompra\nPreco....:%.2f                        Quantidade....:%d\n", preco, qtd);
					printf("\nVenda\nPreco.....:%.2f                         Quantidade....:%d\n", referencia->Preco,referencia->Qtd);
					media = (preco+referencia->Preco)/2;
					printf("\nvalor da transacao....: %.2f",media);
					referencia->Qtd = qtd - referencia->Qtd;
					//se a quantidade for 0, exclua ela.
				}else{
					printf("\nNao foi possivel realizar a compra, quantidade da compra menor que a quantidade da venda\n");	
				}
			}else{
				printf("\nNao foi possivel realizar a compra, preco da compra menor do que o preco da venda\n");
			}
			flag2=1;
		}else{
			flag=1;
		}
		printf("\n---------------------------------------------------------------------------------\n");
	}
	if(flag && !flag2){
		media=-1;
		return 0;
	}
	return 1;
}

/*
Papel *Excluir(int dado, Papel *ptr)
{
	Papel* busca; 
	Papel* anterior;
	anterior = NULL;
	busca = ptr;
	while (busca != NULL) {
		if (busca->info == dado) {
			if (anterior != NULL){
				anterior->prox = busca -> prox;
				return ptr;
			}else{
				ptr = busca-> prox;
				return ptr;
			}
			free(busca);
			break;	
		}
		anterior = busca;
		busca = busca->prox;
	}
  return NULL;
}
Paciente *retiraInicio(Paciente *LISTA)
{
	if(LISTA->prox == NULL){
		printf("Lista ja esta vazia\n");
		return NULL;
	}else{
		Paciente *tmp = LISTA->prox;
		LISTA->prox = tmp->prox;
		return tmp;
	}
}

Paciente *retiraFim(Paciente *LISTA)
{
	if(LISTA->prox == NULL){
		printf("Lista ja vazia\n\n");
		return NULL;
	}else{
		Paciente *ultimo = LISTA->prox,
		*penultimo = LISTA;
		while(ultimo->prox != NULL){
			penultimo = ultimo;
			ultimo = ultimo->prox;
		}
		penultimo->prox = NULL;
		return LISTA;  
	}
}

Paciente *BuscaDado(int dado, Paciente *ptr)
{
  while (ptr !=NULL) {
    if (ptr->info == dado){
		return (ptr);
	}else{
		ptr = ptr->prox;
	} 
  }
  return NULL;
}


*/
int main() {
	int opcao=-1, qtd=0,opcaoDois,retorn=0;
	float Preco=0;
	char nome[21];
	Papel *lista;
	lista = NULL;
	while (opcao!=0){
		opcaoDois=-1;
		printf("\ndigite a opcao:\n1 - Cadastrar Papel para venda\n2 - consultar acoes\n3 - Comprar e vender\n4 - Sair\n");
		scanf("%d",&opcao);
		printf("\n---------------------------------------------------------------------------------\n");
		switch (opcao){
		case 1:
			printf("\ndigite o nome do papel......:\n");
			getchar();
			fgets(nome, 21, stdin);
			printf("\ndigite o preco do papel.....: \n");
			scanf("%f",&Preco);
			printf("\ndigite a quantidade do papel.....: \n");
			scanf("%d",&qtd);
			lista = Cadastrar(lista, Preco, qtd, nome);
			break;
		case 2:
			consultar_acoes(lista);
		break;
		case 3:
			printf("\ndigite o nome da acao que deseja comprar.........: ");
			getchar();
			fgets(nome,21,stdin);
			retorn = Comprar(lista, nome);
			if(!retorn){
				printf("\nNao existe o papel que foi pesquisado\n");
			}
		break;
		case 4:
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

/*if(opcao==1){
		printf("\ndepois da exclusao no fim.....: \n");
		lista= retiraFim(lista);
		consultar_lista(lista);
	}else if(opcao==2){
		printf("\ndepois da exclusao no inicio.....: \n");
		lista= retiraInicio(lista);
		consultar_lista(lista);
	}else if(opcao==3){
		printf("\ndigite o elemento a ser excluido.....: \n");
		scanf("%d",&elemento);
		lista = RemoveDado(elemento,lista);
		if(lista!=NULL){
			printf("\ndepois da exclusao pelo elemento pesquisado.....: \n");
			consultar_lista(lista);
		}else{
			printf("\nnao foi possivel remover, elemento nao encontrado\n");
		}
	}else if(opcao==4){
		printf("\ndigite o elemento a ser pesquisado.....: \n");
		scanf("%d",&elemento);
		lista = BuscaDado(elemento,lista);
		if(lista==NULL){
			printf("\nelemento nao encontrado\n");
		}else{
			printf("contem o elemento pesquisado ");
		}
	}else */
	/*}else if(opcao==6){
		printf("\nLista.................:\n");
		consultar_lista(lista);
	}else{
		if (opcao !=8)
		printf("\nopcao invalida\n");
	
		else 
		printf("saindo..\n");
	}*/