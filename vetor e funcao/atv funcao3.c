#include <stdio.h>

int verificapar(int a)
{
	int re;
	if(a%2==0){
		re=a*5;
	}
	return re;
}

int verificaimpar(int b)
{
	int re;
	if(b%2!=0){
		re=b/3;
	}
	return re;
}

main()
{
	int n,par,impar;
	printf("digite um numero: ");
	scanf("%d",&n);
	
	par=verificapar(n);
	impar=verificaimpar(n);
	
	if(n%2==0){
		printf("%d",par);
	}
	else{
		printf("%d",impar);
	}
}
