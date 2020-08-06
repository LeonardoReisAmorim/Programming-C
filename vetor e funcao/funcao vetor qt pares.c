#include <stdio.h>

void preenchervetor(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int qtpares(int x[],int y)
{
	int i,contpar=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			contpar++;
		}
		else{
			contpar=contpar;
		}
	}
	return contpar;
}

main()
{
	int v[5],pares;
	
	preenchervetor(v,5);
	
	pares=qtpares(v,5);
	
	printf("a quantidade de numeros pares e: %d",pares);
}
