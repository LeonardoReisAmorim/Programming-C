//Nesta atividade pede para dizer a maior idade dos habitantes, a quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 anos e a quantidade de indiv�duos do sexo feminino que tenham olhos verdes e cabelos louros

#include <stdio.h>

main()
{
	int i=1,idade,maior=0,sexo,cor,cabelo,conti=0,contc=0;
	while(i!=-1)
	{
		printf("\ndigite sua idade :");
		scanf("%d",&idade);
		
		if(idade>=0)
		{
			if(idade>maior)
			{
				maior=idade;
			}
			else
			{
				maior=maior;
			}
				printf("\ndigite seu sexo: 1-masculino; 2-feminino: ");
				scanf("%d",&sexo);
				
				printf("\ndigite a cor dos olhos: 1-cor azul; 2-verdes; 3-castanhos: ");
				scanf("%d",&cor);
				
				printf("\ndigite a cor do cabelo: 1-louros; 2-castanhos; 3-pretos: ");
				scanf("%d",&cabelo);
				
				if(sexo==2)
				{
					if(idade>=18 && idade<=35)
					{
						conti++;
					}
					else
					{
						conti=conti;
					}
						if(cor==2 && cabelo==1)	
						{
							contc++;
						}
						else
						{
							contc=contc;
						}
				}
		}
		else
		{
			i=-1;
		}
	}
	printf("\na maior idade dos habitantes e: %d",maior);
	printf("\na quantidade de individuos do sexo feminino cuja idade esta entre 18 e 35 anos e: %d",conti);
	printf("\na quantidade de indiv�duos do sexo feminino que tenham olhos verdes e cabelos louros e: %d",contc);
}
