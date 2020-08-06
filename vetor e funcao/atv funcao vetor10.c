#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("posicao: %d ------ digite o valor: ",i);
		scanf("%d",&x[i]);
	}
}

void par(int x[],int y)
{
	int i,par[5],a=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			par[a]=x[i];
			a++;
		}
		else{
			a=a;
		}
	}
	for(i=0;i<a;i++){
		printf("\npares: %d",par[i]);
	}
}

void impar(int x[],int y)
{
	int i,impar[5],b=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			impar[b]=x[i];
			b++;
		}
		else{
			b=b;
		}
	}
	for(i=0;i<b;i++){
		printf("\nimpar: %d",impar[i]);
	}
}

main()
{
	int v[5];
	
	preenchevet(v,5);
	par(v,5);
	impar(v,5);
}
