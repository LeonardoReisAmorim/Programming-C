#include <stdio.h>
int i;

typedef struct dados{
	char nome[30];
	char sexo[10];
	int idade;
}dados;

void preenchedados(dados x[],int y)
{
	for(i=0;i<y;i++){
		printf("digite o seu nome..: ");
		scanf("%s",&x[i].nome);
		printf("digite o seu sexo..: ");
		scanf("%s",&x[i].sexo);
		printf("digite a sua idade..: ");
		scanf("%d",&x[i].idade);
		printf("\n\n");
	}
}

void imprimedados(dados x[],int y)
{
	for(i=0;i<y;i++){
		printf("\no seu nome e..: %s",x[i].nome);
		printf("\no seu sexo e..: %s",x[i].sexo);
		printf("\na sua idade e..: %d",x[i].idade);
		printf("\n\n");
	}
}

void imprimedadosmaior25(dados x[],int y)
{
	for(i=0;i<y;i++){
		if(x[i].idade>25){
			printf("\no seu nome e..: %s",x[i].nome);
			printf("\no seu sexo e..: %s",x[i].sexo);
			printf("\na sua idade e..: %d",x[i].idade);
			printf("\n\n");
		}
	}
}

main()
{
 	dados pessoa[10];
 	preenchedados(pessoa,10);
 	printf("--IMPRIMINDO DADOS--\n");
 	imprimedados(pessoa,10);
 	printf("\n--IMPRIMINDO DADOS DE PESSOAS MAIOR QUE 25 ANOS--\n");
 	imprimedadosmaior25(pessoa,10);
}
