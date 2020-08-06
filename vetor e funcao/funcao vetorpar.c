#include <stdio.h>

void preenchervetor(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

void vetorpar(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			printf("\npar: %d",x[i]);
		}
	}
}

void vetorimpar(int x[],int y)
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
	
	preenchervetor(v,5);
	
	vetorimpar(v,5);
	
	vetorpar(v,5);
	
}
