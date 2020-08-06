#include <stdio.h>

void preenchevet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%f",&x[i]);
	}
}

float medianota(float x[],int y)
{
	int i;
	float cont=0,soma=0,media;
	
	for(i=0;i<y;i++){
		cont++;
		soma+=x[i];
		media=soma/cont;
	}
	return media;
}

float acimamedia(float x[],int y)
{
	int i;
	float conti=0;
	
	for(i=0;i<y;i++){
		if(x[i]>7){
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
 
	float v[5],notamedia, mediaacima;
	
	preenchevet(v,5);
	notamedia=medianota(v,5);
	mediaacima=acimamedia(v,5);
	
	printf("\nas medias das notas e: %.2f",notamedia);
	printf("\na quantidade de notas acima da media e: %.2f",mediaacima);	
}
