#include <stdio.h>

main()
{
	int i,v[10],maior=0;
	
	for(i=0;i<10;i++) {
		printf("digite os valores: ");
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<10;i++) {
		
		if(v[i]>maior) {
			maior=i;
		}
		else {
			maior=maior;
		}
	}
	printf("\nposicao: %d",maior);
}
