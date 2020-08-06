#include <stdio.h>

void pos(int a)
{
	if(a>0){
		printf("\npositivo");
	}
}

void neg(int a)
{
	if(a<0){
		printf("\nnegativo");
	}
}

main()
{
	int n;
	printf("digite um valor: ");
	scanf("%d",&n);
	
	pos(n);
	neg(n);
}
