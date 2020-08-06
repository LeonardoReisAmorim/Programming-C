#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){ 
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int somaimpares(int x[],int y)
{
	int i,soma=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			soma=soma+x[i];
		}
		else{
			soma=soma;
		}
	}
	return soma;
}

main()
{
	int v[5],soim;
	
	preenchervet(v,5);
	
	soim=somaimpares(v,5);

	printf("a soma dos valores impares e: %d",soim);
}
