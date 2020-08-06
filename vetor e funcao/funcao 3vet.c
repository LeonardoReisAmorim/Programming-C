#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void paresvet(int x[],int y)
{
	int i,par[5],a=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			par[a]=x[i];
			a++;
		}
	}
	for(i=0;i<a;i++){
		printf("\nos valores pares sao: %d",par[i]);
	}
}

void imparesvet(int x[],int y)
{
	int i,impar[5],b=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			impar[b]=x[i];
			b++;
		}
	}
	for(i=0;i<b;i++){
		printf("\nos valores impares e: %d",impar[i]);
	}
}

main()
{
	int v[5];
	
	preenchervet(v,5);
	
	paresvet(v,5);
	
	imparesvet(v,5);
}
