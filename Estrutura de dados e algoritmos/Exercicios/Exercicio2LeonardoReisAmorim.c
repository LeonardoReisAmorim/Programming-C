#include <stdio.h>
#include <stdlib.h>

struct tipo
{
	char Nome[21];
	float Preco;
	int Qtd;
	struct tipo *prox;

};

typedef struct tipo Papel;

// cria o inicio da lista
Papel *inicio=NULL;

//Cadastrar V, Comprar F, Listar V, Excluir F

Papel* Cadastrar(Papel* l, int preco, int qtd, char nome[])
{
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

void consultar_acoes(Papel* inicio)
{
	Papel *referencia;
	for(referencia= inicio;referencia!= NULL; referencia=referencia->prox){
		printf("\n%s\t\n", referencia->Nome);
		printf("\n%f\t\n", referencia->Preco);
		printf("\n%d\t\n", referencia->Qtd);
	}
	printf("\n");
}
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

Paciente *RemoveDado(int dado, Paciente *ptr)
{
	Paciente* busca; 
	Paciente* anterior;
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
*/
int main() {
	int opcao=0, qtd=0;
	float Preco=0;
	char nome[21];
	Papel *lista;
	lista = NULL;
	while (opcao!=0){
		printf("\ndigite a opcao:\n1 - inserir elemento na lista\n2 - consultar ações\n3 - excluir um elemento pesquisado\n4 - buscar um elemento na lista\n1 -excluir no fim\n0 = sair\n6 - consultar lista\n");
		scanf("%d",&opcao);
		switch (opcao){
		case 1:
			printf("\ndigite o nome da ação......:\n");
			fgets(nome, 21, stdin);
			printf("\ndigite o preço da acão.....: \n");
			scanf("%f",&Preco);
			printf("\ndigite a quantidade da acão.....: \n");
			scanf("%d",&qtd);
			lista = Cadastrar(lista, Preco, qtd, nome);
			break;
		case 2:
			printf("\n.........Papeis........:\n");
			consultar_acoes(lista);
		break;
		default:
			break;
		}
		if(opcao==1){
			
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
	}
    return 0;
}