//Elaborar uma tabuada

#include <stdio.h>

main()
{
	int n,i,j=1;
	
	while(j!=0)
	{
	
	printf("\n---------------------------TABUADA----------------------------------------------------------------");
	printf("\n--------------------------------------------------------------------------------------------------");
	
	printf("\n\ndigite um numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d = %d\n",n,i,n*i);
	}
	
	if(n<=0)
	{
		j=0;
	}
	else
	{
		j=j;
	}
	
	}
}
