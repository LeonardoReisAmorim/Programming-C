#include <stdio.h>

main()
{
	int i=1,voto,cont1=0,cont2=0,cont3=0,cont4=0,contn=0,contb=0;
	
	while(i!=0)
	{
		printf("\ndigite:\n1-para o conditato 1:\n\n2-para o conditato 2:\n3-para o conditato 3:\n4-para o conditato 4 ");
		printf("\n5-voto nulo:\n6- voto em branco: \n");
		scanf("%d",&voto);
		
		if(voto>0)
		{
			i=1;
			switch(voto)
			{
				case 1:
					cont1++;
				break;
				
				case 2:
					cont2++;
				break;
				
				case 3:
					cont3++;
				break;
				
				case 4:
					cont4++;
				break;
				
				case 5:
					contn++;
				break;
				
				case 6:
					contb++;
				break;
				
				default: 
					printf("\ncomando invalido");
			}
		}
		else
		{
			i=0;
		}
	}
	printf("total de votos para cada candidato e: 1=%d; 2=%d; 3=%d; 4=%d; 5=%d; 6=%d",cont1,cont2,cont3,cont4,contn,contb);
	printf("\ntotal de votos nulos e: %d",contn);
	printf("\ntotal de votos em branco e: %d",contb);
}
