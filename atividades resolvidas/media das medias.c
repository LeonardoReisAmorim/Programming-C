//pede para dizer a media das medias, a maior media e a menor media

#include <stdio.h>

main()
{
	int i=1,cont=0;
	float media,maior,menor=0,somam=0;
	
	while(i!=0)
	{
		printf("digite sua media: ");
		scanf("%f",&media);
		
		if(media>0)
		{
			i=1;
			somam=somam+media;
			cont++;
			
			if(media>maior)
			{
				maior=media;
			}
			else
			{
				maior=maior;
			}
				if(media>0)
				{
					
					menor=media;
				}
				else
				{
					menor=menor;
				}
					if(media<menor)
					{
						menor=media;
					}
					else
					{
						menor=media;
					}
				
				
		}
		else
		{
			i=0;
		}
	}
	printf("a media das medias foi: %.2f ",somam/cont);
	printf("\na maior media foi: %.2f ",maior);
	printf("\na menor media foi: %.2f ",menor);
}
