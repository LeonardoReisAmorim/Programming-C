#include <stdio.h>

int media(int a,int b,int c,int d)
{
	return (a+b+c+d)/4;
}

main()
{
	int n1,n2,n3,n4,median;
	printf("digite o primeiro valor: ");
	scanf("%d",&n1);
	printf("digite o segundo valor: ");
	scanf("%d",&n2);
	printf("digite o terceiro valor: ");
	scanf("%d",&n3);
	printf("digite o quarto valor: ");
	scanf("%d",&n4);
	
	median=media(n1,n2,n3,n4);
	
	printf("a media desses valores e: %d",median);
}
