#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void posipares(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\n%d",i);
		}
	}
}

main()
{
	int v[5];
	
	preenchervet(v,5);
	
	posipares(v,5);
}
