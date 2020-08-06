#include <stdio.h>
int i;
int j;

void preenche(int x[],int y)
{
	for(i=0;i<y;i++){
		printf("posicao: %d; digite os valores: ",i);
		scanf("%d",&x[i]);
	}
}

int somavetpa(int x[],int y)
{
	int soma=0;
	for(i=0;i<y;i++){
		if(i%2==0 && i!=0){
			soma+=x[i];
		}
		else{
			soma=soma;
		}
	}
	return soma;
}

int valoresiguais(int x[],int y,int z[])
{
	int cont=0;
	for(i=0;i<y;i++){
		if(x[i]==z[i]){
			cont++;
		}
		else{
			cont=cont;
		}
	}
	return cont;
}

main()
{
	/*printf("\nexercicio 1\n\n");
	int v[5],so;
	preenche(v,5);
	so=somavetpa(v,5);
	printf("\n%d",so);*/
	
	/*printf("\nexercicio 2\n\n");
	int v[5],v1[5],va;
	preenche(v,5);
	preenche(v1,5);
	va=valoresiguais(v,5,v1);
	printf("\n%d",va);*/
	
	/*printf("\nexercicio 3\n\n");
	int m[3][3];
	float soma=0,cont=0,media;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				soma+=m[i][j];
				cont++;
				media=soma/cont;
			}
			
		}
	}
	printf("\nsoma: %.2f",soma);
	printf("\nqt: %.2f",cont);
	printf("\nmedia: %.2f",media);*/
	
	
}
