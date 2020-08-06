#include <stdio.h>

int soma(int a,int b,int c)
{
	return a+b+c;
}

main()
{
	int n1,n2,n3,n4,resusoma;
	
	printf("digite 3 valores: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	resusoma=soma(n1,n2,n3);

	printf("a resultado e: %d",resusoma);
}
