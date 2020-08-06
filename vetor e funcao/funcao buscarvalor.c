#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void buscarvalor(int x[],int y)
{
	int i,buscador,achei=0;
	
	printf("\ndigite um valor para ser buscado: ");
	scanf("%d",&buscador);

	for(i=0;i<y;i++){
		if(buscador==x[i]){
			achei=1;
			printf("\no valor e: %d\na posicao e: %d",x[i],i);
		}
		else{
			achei=achei;
		}
	}
	if(achei==0){
		printf("\n\no valor nao foi encontrado");
	}
	else{
		achei=achei;
	}
	
}

main()
{
	int v[5];
	
	preenchervet(v,5);
	buscarvalor(v,5);
}
