#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void buscador(int x[],int y)
{
	int i,buscador,buscou=0;
	printf("\ndigite um valor para ser buscado: ");
	scanf("%d",&buscador);
	
	for(i=0;i<y;i++){
		if(buscador==x[i]){
			printf("\nValor: %d ---- posicao: %d",x[i],i);
			buscou=1;
			
		}
		else{
			buscou=buscou;
		}
	}
	
	if(buscou==1){
		printf("\no valor foi achado");
	}
	else{
		printf("\no valor nao foi achado");
	}
}

main()
{
	int v[3];
	
	preenchevet(v,3);
	buscador(v,3);
}
