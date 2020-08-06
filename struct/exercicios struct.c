#include <stdio.h>
int i;


typedef struct data{
	int dia;
	char mes[15];
	int ano;
}data;

typedef struct nota{
	char niver[30];
}nota;

void preenchedata(data x[],int y,nota a[])
{
	for(i=0;i<y;i++){
		printf("digite o dia: ");
		scanf("%d",&x[i].dia);
		printf("\ndigite o mes: ");
		scanf("%s",&x[i].mes);
		printf("\ndigite o ano: ");
		scanf("%d",&x[i].ano);
		
		printf("digite o acontecimento: ");
		scanf("%s",&a[i].niver);
		printf("\n\n");
	}
}

void imprimedata(data x[],int y,nota a[])
{
	for(i=0;i<y;i++){
		printf("%d:%s:%d",x[i].dia,x[i].mes,x[i].ano);
		printf("\n\n");
		
		printf("\nacontecimento: %s\n",a[i].niver);
	}
}

main()
{
	data hoje[2];
	nota aniversario[2];
	
	preenchedata(hoje,2,aniversario);
	printf("\n\n");
	imprimedata(hoje,2,aniversario);
}
