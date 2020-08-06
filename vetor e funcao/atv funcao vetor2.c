#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int numpar(int x[],int y)
{
	int i,cont=0;
	for(i=0;i<y;i++){
		if(x[i]%2==0){
			cont++;
		}
		else{
			cont=cont;
		}
	}
	return cont;
}

main()
{
	int v[5],qtpar;
	
	preenchevet(v,5);
	qtpar=numpar(v,5);
	
	printf("a quantidade de numeros pares e: %d",qtpar);
	
}
