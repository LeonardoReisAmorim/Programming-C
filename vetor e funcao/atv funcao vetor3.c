#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os numeros: ");
		scanf("%d",&x[i]);
	}
}

int somarimpar(int x[],int y)
{
	int i,somaimpar=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
			somaimpar+=x[i];
		}
		else{
			somaimpar=somaimpar;
		}
	}
	return somaimpar;
}

main()
{
	int v[5],impar;
	
	preenchevet(v,5);
	
	impar=somarimpar(v,5);
	
	printf("a soma dos numeros impares e: %d",impar);
}
