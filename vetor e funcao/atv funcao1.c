#include <stdio.h>

int soma(int a,int b,int c)
{
	return a+b+c;
}

main()
{
	int n1,n2,n3,soman;
	printf("digite o primeiro valor: ");
	scanf("%d",&n1);
	printf("digite o segundo valor: ");
	scanf("%d",&n2);
	printf("digite o terceiro valor: ");
	scanf("%d",&n3);
	
	soman=soma(n1,n2,n3);
	
	printf("a soma desses valores e: %d",soman);
}
