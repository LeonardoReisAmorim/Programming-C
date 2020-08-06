#include <stdio.h>
#include <string.h>
int i;

typedef struct dados{
	char nome[30];
	char marcaveiculo[30];
	char modelo[20];
	char cor[15];
	int ano;
}dados;

void registradados(dados x[],int y)
{
	for(i=0;i<y;i++){
		printf("\ncliente: %d\n\ndigite o seu nome..: ",i+1);
		scanf("%s",&x[i].nome);
		printf("digite a marca do veiculo..: ");
		scanf("%s",&x[i].marcaveiculo);
		printf("digite o modelo do veiculo..: ");
		scanf("%s",&x[i].modelo);
		printf("digite a cor do veiculo..: ");
		scanf("%s",&x[i].cor);
		printf("digite o ano do veiculo..: ");
		scanf("%d",&x[i].ano);
		printf("\n\n");
	}
}

void imprimedados(dados x[],int y)
{
	for(i=0;i<y;i++){
		printf("\ncliente: %d\n\nseu nome..: %s",i+1,x[i].nome);
		printf("\nmarca do veiculo..: %s",x[i].marcaveiculo);
		printf("\nmodelo do veiculo..: %s",x[i].modelo);
		printf("\ncor do veiculo..: %s",x[i].cor);
		printf("\nano do veiculo..: %d",x[i].ano);
		printf("\n\n");
	}
}

void anomaior(dados x[],int y)
{
	for(i=0;i<y;i++){
		if(x[i].ano>2010){
			printf("\ncliente: %d\n\nseu nome..: %s",i+1,x[i].nome);
			printf("\nmarca do veiculo..: %s",x[i].marcaveiculo);
			printf("\nmodelo do veiculo..: %s",x[i].modelo);
			printf("\ncor do veiculo..: %s",x[i].cor);
			printf("\nano do veiculo..: %d",x[i].ano);
			printf("\n\n");
		}
	}
}

void corcarroana(dados x[],int y)
{
	int resultado;
	for(i=0;i<y;i++){
		resultado=strcmp(x[i].nome,"ana");
		if(resultado==0){
			printf("\ncor do carro de ana..: %s",x[i].cor);
		}
	}
}

void modelodetodosvei(dados x[],int y)
{
	for(i=0;i<y;i++){
		printf("\ncliente: %d",i+1);
		printf("\nmodelo do veiculo: %s",x[i].modelo);
	}
}

main()
{
	dados clientes[2];
	registradados(clientes,2);
	printf("--IMPRIMINDO DADOS--\n\n");
	imprimedados(clientes,2);
	printf("\n--DADOS ONDE O ANO DO CARRO EH MAIOR QUE 2010--\n");
	anomaior(clientes,2);
	printf("\n\n--MODELO DE TODOS OS VEICULOS--\n");
	modelodetodosvei(clientes,2);
	printf("\n\n--COR DO CARRO DE ANA--\n");
	corcarroana(clientes,2);
}
