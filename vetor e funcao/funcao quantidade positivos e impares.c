#include <stdio.h>

void preenchervet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int qtposi(int x[],int y)
{
	int i,contpo=0;
	for(i=0;i<y;i++){
		if(x[i]>0){
			contpo++;
		}
		else{
			contpo=contpo;
		}
	}
	return contpo;
}

int qtimpares(int x[],int y)
{
	int i,contim=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			contim++;
		}
		else{
			contim=contim;
		}
	}
	return contim;
}

main()
{
	int v[5],quantidadepositivos,quantidadeimpares;
	
	preenchervet(v,5);
	
	quantidadepositivos=qtposi(v,5);
	
	quantidadeimpares=qtimpares(v,5);
	
	printf("\na quantidade de numeros positivos e: %d",quantidadepositivos);
	printf("\na quantidade de numeros impares e: %d",quantidadeimpares);
	
	
	
}
