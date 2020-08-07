//Elabore um programa que leia 20 números e diga quantos são maiores que 50

#include <stdio.h>

main()
{
	int i,n,cont=0;
	for(i=1;i<=20;i++)
	{
		printf("digite o numero");
		scanf("%d",&n);
		
		if(n>50)
		{
			cont++;
		}
		else
		{
			cont=cont;
		}
	}
	printf("a quantidade de numeros maiores que 50 e: %d",cont);
}
