#include <stdio.h>

void preenchevet(float x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os numeros: ");
		scanf("%f",&x[i]);
	}
}

float maiormedia(float x[],int y)
{
	int i;
	float maiormedia=0;
	for(i=0;i<y;i++){
		if(x[i]>maiormedia){
			maiormedia=x[i];
		}
		else{
			maiormedia=maiormedia;
		}
	}
	return maiormedia;
}

main()
{
	int v[5];
	float mediamaior;
	
	preenchevet(v,5);
	mediamaior=maiormedia(v,5);
	
	printf("a media campea e: %.2f",mediamaior);
}
