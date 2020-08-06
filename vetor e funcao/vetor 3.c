#include <stdio.h>

main()
{
	int i,v[10],soma=0;
	
	for(i=0;i<10;i++)
	{
		printf("digite os valores: ");
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++)
	{
		if(v[i]%2!=0)
		{
			soma=soma+v[i];
		}
		else
		{
			soma=soma;		
		}
	}
	printf("%d",soma);
}
