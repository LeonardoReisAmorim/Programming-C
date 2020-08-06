#include<stdio.h>
#include<string.h>

int i;

typedef struct dados
{
	char nome[10];
	int idade;
	float altura;
		
}dados;


preencher(dados x[],int y)
{

	for(i=0;i<y;i++)
	{
		
	printf("Digite seu nome\n");
	scanf("%s",&x[i].nome);
	printf("Digite sua idade\n");
	scanf("%d",&x[i].idade);
	printf("Digite sua altura\n");
	scanf("%f",&x[i].altura);
	}
}


imprimir(dados x[],int y)
{

	for(i=0;i<y;i++)
	{
	
	printf(" Nome: %s\n Idade: %d\n Altura: %.2f\n",x[i].nome,x[i].idade,x[i].altura);
	
	} 

}


procurar(dados x[],int y,char nome[10])
{
int r;
	for(i=0;i<y;i++)
	{
    r=strcmp(x[i].nome,nome);
    
    if(r==0)
    {
    	printf(" Nome: %s\n Idade: %d\n Altura: %.2f\n",x[i].nome,x[i].idade,x[i].altura);	
	}
	
	}	

}



main()
{
	dados v[4];
	int x;
	char n[10];
	
	preencher(v,2);
	imprimir(v,4);
	
	printf("digite o nome\n");
	scanf("%s",&n);	
	
	procurar(v,2,n);
	
	

	
	
	
	
}


