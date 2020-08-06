#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os numeros: ");
		scanf("%d",&x[i]);
	}
}

int maiorindice(int x[],int y)
{
	int i,maior=0,posmaior=0;
	
	for(i=0;i<y;i++){
		if(x[i]>maior){
			maior=x[i];
			posmaior=i;
		}
	}
	return posmaior;
}

main()
{
	int v[5],indmaior;
	
	preenchevet(v,5);
	indmaior=maiorindice(v,5);
	
	printf("o indice do maior elemento e: %d",indmaior);
}
