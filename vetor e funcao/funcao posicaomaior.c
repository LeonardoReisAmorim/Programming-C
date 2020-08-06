#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int maiorposi(int x[],int y)
{
	int i,maior=0;
	for(i=0;i<y;i++){
		if(x[i]>maior){
			maior=i;
		}
		else{
			maior=maior;
		}
	}
	return maior;
}
main()
{
	int v[5],posicaomaior;
	
	preenchervet(v,5);
	
	posicaomaior=maiorposi(v,5);
	
	printf("a maior posicao e: %d",posicaomaior);
}
