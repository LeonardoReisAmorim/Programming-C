#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os numeros: ");
		scanf("%d",&x[i]);
	}
}

void pospares(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\nnumero: %d --- posicao: %d",x[i],i);
		}
	}
}

main()
{
	int v[5];
	
	preenchevet(v,5);
	pospares(v,5);
}
