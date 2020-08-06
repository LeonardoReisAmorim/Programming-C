#include <stdio.h>

main()
{
	int i,v[10];
	
	for(i=0;i<10;i++)
	{
		printf("digite os valore: ");
		scanf("%d",&v[i]);
	}
	for(i=0;i<10;i++)
	{
		if(v[i]%2==0)
		{
			printf("\npar: %d",v[i]);
		}
		else
		{
			printf("\nimpar: %d",v[i]);		
		}
	}
}
