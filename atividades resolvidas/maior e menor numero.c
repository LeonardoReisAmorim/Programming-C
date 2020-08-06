#include <stdio.h>

main()
{
	int i,n,maior,menor;
	
	for(i=1;i<=15;i++)
	{
		printf("digite um valor");
		scanf("%d",&n);
		
		if(n>maior)
		{
			maior=n;
		}
		else
		{
			maior=maior;
		}
			if(i==1)
			{
				menor=n;
			}
			else
			{
				menor=menor;
			}
				if(n<menor)
				{
					menor=n;
				}
				else
				{
					menor=menor;
				}
	}
	printf("o maior dos numeros e %d\n e o menor dos numeros e %d\n",maior,menor);
}
