#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void par(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\npar: %d",x[i]);
		}
	}
}

void impar(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			printf("\nimpar: %d",x[i]);
		}
	}
}

main()
{
	int v[5];
	
	preenchevet(v,5);
	par(v,5);
	impar(v,5);
}
