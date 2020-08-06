#include<stdio.h>

int i;

typedef struct
{
	float nota1;
	float nota2;
	float nota3;
	
}Notas;


inserir(Notas x[],int y)
{
	for(i=0;i<y;i++)
	{
	
	printf("Digite a primeira nota\n");
	scanf("%f",&x[i].nota1);
	printf("Digite a segunda nota\n");
	scanf("%f",&x[i].nota2);
	printf("Digite a terceira nota\n");
	scanf("%f",&x[i].nota3);
}
		
}


imprimir(Notas x[],int y)
{

	for(i=0;i<y;i++)
	{
	printf("Notas: %.1f - %.1f - %.1f\n",x[i].nota1,x[i].nota2,x[i].nota3);
	printf("Media: %.1f\n",(x[i].nota1+x[i].nota2+x[i].nota3)/3);
	
	}
}




main()
{
	Notas aluno1[2];
	
	
	
	inserir(aluno1,2);
	imprimir(aluno1,2);
	
	

	
	
	
	
	
	
	
}


