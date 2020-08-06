#include <stdio.h>

void preenchevet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%f",&x[i]);
	}
}

float so(float x[],int y)
{
	int i;
	float soma=0;
	for(i=0;i<y;i++){
		soma+=x[i];
	}
	return soma;
}

float me(float x[],int y)
{
	int i;
	float soma=0,media,cont=0;
	for(i=0;i<y;i++){
		soma+=x[i];
		cont++;
		media=soma/cont;
	}
	return media;
}

float qtmenor(float x[],int y)
{
	int i;
	float conti=0;
	for(i=0;i<y;i++){
		if(x[i]<10){
			conti++;
		}
		else{
			conti=conti;
		}
	}
	return conti;
}

main()
{
	float v[5],soma,media,menor;
	
	preenchevet(v,5);
	soma=so(v,5);
	media=me(v,5);
	menor=qtmenor(v,5);
	
	printf("\na soma dos numeros e: %.2f",soma);
	printf("\na media dos numeros e: %.2f",media);
	printf("\na quantidade de numeros menores que 10 e: %.1f",menor);
}
