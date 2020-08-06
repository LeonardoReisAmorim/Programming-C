#include <stdio.h>

int par(int a)
{
	int mult;
	if(a%2==0){
		mult=a*5;
	}
	else{
		mult=mult;
	}
	return mult;
}

int impar(int b)
{
	float div;
	if(b%2!=0){
		div=b/3;
	}
	else{
		div=div;
	}
	return div;
}

main()
{
	int n1,resumulti,resudiv;
	
	printf("digite um numero: ");
	scanf("%d",&n1);
	
	resumulti=par(n1);
	
	resudiv=impar(n1);
	
	if(n1%2==0){
		printf("%d",resumulti);
	}
	else{
		printf("%d",resudiv);
	}
}
