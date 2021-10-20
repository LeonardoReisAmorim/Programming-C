#include <stdio.h>
#include <stdlib.h>

struct tipo
{
	int info;
	struct tipo *prox;

};

typedef struct tipo Paciente;

// cria o inicio da lista
Paciente *inicio=NULL;

Paciente* inserir_lista(Paciente* l, int i)
{
	Paciente* novo= malloc(sizeof(Paciente));
	Paciente* aux;
	if(novo){
		novo->info = i;
		if(l == NULL){
			novo->prox = NULL;
			l = novo;
		}else if(novo->info < (l)->info){
			novo->prox = l;
			l = novo; 
		}else{
			aux = l;
			while (aux->prox && novo->info > aux->prox->info){
				aux = aux->prox;
			}
			novo->prox = aux->prox;
			aux->prox = novo;
		}
	}
	return l;
}

void consultar_lista(Paciente* inicio)
{
	Paciente *referencia;
	for(referencia= inicio;referencia!= NULL; referencia=referencia->prox){
		printf("%d\t", referencia->info);
	}
	printf("\n");
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

int main() {
	int opcao=0,elemento=0;
	Paciente *lista;
	lista = NULL;
	while (opcao!=8)
	{
	printf("\ndigite a opcao:\n1 -excluir no fim\n2 - excluir no inicio\n3 - excluir um elemento pesquisado\n4 - buscar um elemento na lista\n5 - inserir elemento na lista\n8 = sair\n6 - consultar lista\n");
	scanf("%d",&opcao);
	if(opcao==1){
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
	}else if(opcao==5){
		printf("\ndigite o elemento a ser incluido.....: \n");
		scanf("%d",&elemento);
		lista = inserir_lista(lista, elemento);
	}else if(opcao==6){
		printf("\nLista.................:\n");
		consultar_lista(lista);
	}else{
		if (opcao !=8)
		printf("\nopcao invalida\n");
	
		else 
		printf("saindo..\n");
	}
	}
    return 0;
}