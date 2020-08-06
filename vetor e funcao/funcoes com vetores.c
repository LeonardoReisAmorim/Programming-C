#include <stdio.h>

void preenchevet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%f",&x[i]);
	}
}

float somavet(float x[],int y)
{
	int i;
	float soma=0;
	for(i=0;i<y;i++){
		soma=soma+x[i];
	}
	return soma;
}

float mediavet(float x[],int y)
{
	int i;
	float cont=0,soma=0,media;
	for(i=0;i<y;i++){
		cont++;
		soma=soma+x[i];
		media=soma/cont;
	}
	return media;
}

float qtmenores10(float x[],int y)
{
	int i,cont=0;
	for(i=0;i<y;i++){
		if(x[i]<10){
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
	float v[5],soma,media,menores10;
	
	preenchevet(v,5);
	
	soma=somavet(v,5);
	
	media=mediavet(v,5);
	
	menores10=qtmenores10(v,5);
	
	printf("\na soma e: %.2f",soma);
	printf("\na media e: %.2f",media);
	printf("\na quantidade de valores menores que 10 e: %.2f",menores10);
}
