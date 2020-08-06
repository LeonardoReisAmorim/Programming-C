#include <stdio.h>

void preenchevet(int x[],int y)
{
	int i;
	for(i=0;i<y;i++){
		printf("digite os valores: ");
		scanf("%d",&x[i]);
	}
}

int posi(int x[],int y)
{
	int i,contpos=0;
	for(i=0;i<y;i++){
		if(x[i]>0){
			contpos++;
		}
		else{
			contpos=contpos;
		}
	}
	return contpos;
}

int impar(int x[],int y)
{
	int i,conti=0;
	for(i=0;i<y;i++){
		if(x[i]%2!=0){
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
	int v[5],qtpos,qtimpar;
	
	preenchevet(v,5);
	qtpos=posi(v,5);
	qtimpar=impar(v,5);
	
	printf("a quantidade de numeros positivos e: %d\ne a quantidade de numeros impares e: %d",qtpos,qtimpar);
}
