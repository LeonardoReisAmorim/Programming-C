#include <stdio.h>

void preenchervet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite as medias: ");
		scanf("%f",&x[i]);
	}
}

float mediamaior(float x[],int y)
{
	int i,maior=0;
	for(i=0;i<y;i++){
		if(x[i]>maior){
			maior=x[i];
		}
		else{
			maior=maior;
		}
	}
	return maior;	
}

main()
{
	float v[5],maiormedia;
	
	preenchervet(v,5);
	
	maiormedia=mediamaior(v,5);
	
	printf("a maior media foi %.2f",maiormedia);	
}
