#include <stdio.h>
#include <string.h>
int i;

typedef struct data{
	int dia;
	int mes;
	int ano;
}data;

typedef struct funcionario{
	char nome[20];
	int setor;
	data nascimento;
}funcionario;


void preencherdados(funcionario x[],int y)
{
	printf("\n===========================================CADASTRO=======================================================\n");
	for(i=0;i<y;i++){
		printf("\nFUNCIONARIO %d",i+1);
		printf("\ndigite o seu nome....:  ");
		scanf("%s",&x[i].nome);
		printf("\ndigite o setor que trabalha:  ");
		scanf("%d",&x[i].setor);
		printf("\ndigite o dia do nascimento:  ");
		scanf("%d",&x[i].nascimento.dia);
		printf("\ndigite o mes do nascimento:  ");
		scanf("%d",&x[i].nascimento.mes);
		printf("\ndigite o ano do nascimento:  ");
		scanf("%d",&x[i].nascimento.ano);
		printf("\n======================================================================================================\n");
		printf("\n\n");
	}
}

void imprimedados(funcionario x[],int y)
{
	printf("\n===========================================MOSTRANDO DADOS=================================================\n");
	for(i=0;i<y;i++){
		printf("\nFUNCIONARIO %d",i+1);
		printf("\nseu nome e:   %s",x[i].nome);
		printf("\no setor que trabalha e:  %d",x[i].setor);
		printf("\nsua data de nascimento e:   %d/%d/%d  ",x[i].nascimento.dia,x[i].nascimento.mes,x[i].nascimento.ano);
		printf("\n======================================================================================================\n");
		printf("\n\n");
	}
}


main()
{
	funcionario empresa[2];
	int ca,j=0,cd;

	printf("\nDeseja cadastrar:\n1 - sim\n2 - nao\n");
	scanf("%d",&ca);
	if(ca==1){
		while(j==0){
			printf("=======================================================MENU================================================\n");
			printf("\n1 - Cadastrar:\n2 - mostrar\n3 - sair\n");
			scanf("%d",&cd);
			
			switch(cd){
				case 1:
					preencherdados(empresa,2);
				break;
				
				case 2:
					imprimedados(empresa,2);
				break;
				
				case 3:
					j=1;
				break;
				
				default:
					printf("\nopcao incorreta");
			}
		}
	}
	else{
		printf("\nencerrando programa");
	}
}
