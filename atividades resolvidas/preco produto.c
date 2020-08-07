//mercadinho

#include <stdio.h>

main()
{
	int i=1,contp=0,contn=0;
	float precus,somas=0,soman=0,preconovo;
	
	while(i>0)
	{
		printf("\ndigite o codigo do produto: ");
		scanf("%d",&i);
		
		if(i>=0)
		{
			printf("\ndigite o preco de custo de cada produto: ");
			scanf("%f",&precus);
			contp++;
			somas=somas+precus;
			
			preconovo=precus*1.20;
			contn++;
			soman=soman+preconovo;
			printf("\no codigo do produto e: %d; e o preco reajustado e: %.2f ",i,preconovo);
		}
		else
		{
			i=i;
		}
	}
	printf("\na media dos precos com desconto e: %.2f",soman/contn);
	printf("\na media dos precos sem desconto e: %.2f",somas/contp);
}
