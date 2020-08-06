#include <stdio.h>

void preenchervet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite as notas: ");
		scanf("%f",&x[i]);
	}
}

float medianotas(float x[],int y)
{
	int i,cont=0;
	float soma=0,media;
	for(i=0;i<y;i++){
		soma=soma+x[i];
		cont++;
		media=soma/cont;
	}
	return media;
}

float acimamedia(float x[],int y)
{
	int i,conti=0;
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
	float v[5],notasmedia,mediaacima;
	
	preenchervet(v,5);
	
	notasmedia=medianotas(v,5);
	
	mediaacima=acimamedia(v,5);
	
	printf("\na media das notas foi %.2f",notasmedia);
	printf("\nas notas acima da media foi %.2f",mediaacima);
	
}
