#include <stdio.h>

main()
{
	int i,idade,cont=0;
	for(i=1;i<=10;i++)
	{
		printf("digite a idade:");
		scanf("%d",&idade);
		
		if(idade<18)
		{
			cont++;
		}
		else
		{
			cont=cont;
		}
	}
	printf("quantidade de pessoas que sao menores de idade: %d\n",cont);
}
