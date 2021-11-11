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

typedef struct tipo PapelC;
typedef struct tipo PapelV;

// nome, tipo(c ou v), qtd, valor
int id=0;

//Cadastrar V, Comprar V, Listar V, Excluir V

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
		}else if(novo->Preco > (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->id = criarId();
		}else{
			aux = l;
			while (aux->prox && novo->Preco < aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->id = criarId();
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
		}else if(novo->Preco < (l)->Preco){
			novo->prox = l;
			l = novo; 
			novo->id = criarId();
		}else{
			aux = l;
			while (aux->prox && novo->Preco > aux->prox->Preco){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
			novo->id = criarId();
		}
	}
	return l;
}

void consultar_acoes(PapelC* inicioC,PapelV* inicioV){
	int i=0,j=0;
	PapelC *referenciaC;
	PapelV *referenciaV;
	if(!inicioC || !inicioV){
		printf("\nNao existem acoes disponiveis no momento\n");
	}else{
		printf("\n**************************************************************************************************************************************************************\n");
		//printf("\n=====================================     COMPRA     ==========================================\n");
		for(referenciaC= inicioC;referenciaC!= NULL; referenciaC=referenciaC->prox){
			j++;
			printf("\nNome do papel da compra....:%s", referenciaC->Nome);
			printf("\nPreco do papel da compra....:%.2f      Quantidade do papel da compra....:%d", referenciaC->Preco,referenciaC->Qtd);
			for(referenciaV= inicioV;referenciaV!=NULL; referenciaV=referenciaV->prox){
				i++;
				//printf("\n\ni: %d",i);
				if(i==j){
					printf("\t\tNome do papel da venda....:%s\t", referenciaV->Nome);
					printf("\n\t\t\t\t\t\t\t\t\t\t\tPreco do papel da venda....:%.2f      Quantidade do papel da venda....:%d", referenciaV->Preco,referenciaV->Qtd);
					printf("\n\n-----------------------------------------------------------------------------------------------------------------------------------------------------\n");
				}
			}
			//printf("\n\nj: %d",j);
			i=0;
		}
		//printf("\n=====================================      VENDA     ==========================================\n");
		printf("\n**************************************************************************************************************************************************************\n");
	}
	
}

/*void *Excluir(int id, Papel *ptr){
	Papel* busca; 
	Papel* anterior;
	anterior = NULL;
	busca = ptr;
	while (busca != NULL) {
		if (busca->id == id) {
			if (anterior != NULL){
				anterior->prox = busca -> prox;
				//return ptr;
			}else{
				ptr = busca-> prox;
				//return ptr;
			}
			free(busca);
			break;	
		}
		anterior = busca;
		busca = busca->prox;
	}
  //return NULL;
}*/

/*int Comprar(Papel* p, char nome[]){
	int flag=0,flag2=0,qtd=0,i;
	float media=0,preco=0,precoAntes=0;
	Papel *referencia;
	//o valor da transação seria a *média entre os dois valores*
	for(referencia= p;referencia!= NULL; referencia=referencia->prox){
		if(strcmp(referencia->Nome, nome)==0){
			precoAntes = referencia->Preco;
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
					printf("\nvalor da transacao....: %.2f\n",media);
					referencia->Qtd = qtd - referencia->Qtd;
					i++;
					//se a quantidade for <0, exclua ela.
					if(referencia->Qtd <= 0){
						//printf("\nid: %d",referencia->id);
						//Excluir(referencia->id, referencia);
					}
						
					
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
		if(i>=2){
			break;
		}
		printf("\n---------------------------------------------------------------------------------\n");
	}
	if(flag && !flag2){
		media=-1;
		return 0;
	}
	return 1;
}*/

/*
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
	int opcao=-1, qtd=0,opcaoDois=1,retorn=0;
	float Preco=0;
	char nome[21];
	PapelC *listaCompra;
	PapelV *listaVenda;
	listaCompra = NULL;
	listaVenda = NULL;
	while (opcao!=0){
		opcaoDois=-0;
		printf("\ndigite a opcao:\n1 - Cadastrar Papel\n2 - consultar acoes\n3 - Comprar e vender\n4 - Sair\n");
		scanf("%d",&opcao);
		printf("\n---------------------------------------------------------------------------------\n");
		switch (opcao){
		case 1:
			opcaoDois=1;
			while(opcaoDois){
				printf("\ndigite a opcao:\n1 - Cadastrar Compra\n2 - Cadastrar Venda\n3 - sair\n");
				scanf("%d",&opcaoDois);
				if(opcaoDois==1){
					//printf("\ndigite o nome do papel para compra......:\n");
					//getchar();
					//fgets(nome, 21, stdin);
					printf("\ndigite o preco do papel para compra.....: \n");
					scanf("%f",&Preco);
					printf("\ndigite a quantidade do papel para compra.....: \n");
					scanf("%d",&qtd);
					listaCompra = CadastrarCompra(listaCompra, Preco, qtd, "nome");
				}else if(opcaoDois==2){
					//printf("\ndigite o nome do papel para venda......:\n");
					//getchar();
					//fgets(nome, 21, stdin);
					printf("\ndigite o preco do papel para venda.....: \n");
					scanf("%f",&Preco);
					printf("\ndigite a quantidade do papel para venda.....: \n");
					scanf("%d",&qtd);
					listaVenda = CadastrarVenda(listaVenda, Preco, qtd, "nome");
				}else if(opcaoDois==3){
					opcaoDois=0;
				}else{
					printf("\nopcao invalida\n");
				}
			}
			
			break;
		case 2:
			consultar_acoes(listaCompra,listaVenda);
		break;
		case 3:
			/*printf("\ndigite o nome da acao que deseja comprar.........: ");
			getchar();
			fgets(nome,21,stdin);
			//retorn = Comprar(lista, nome);
			if(!retorn){
				printf("\nNao existe o papel que foi pesquisado\n");
			}
			*/
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