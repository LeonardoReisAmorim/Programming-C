#include <stdio.h>

main()
{
	int i,j,m[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nos valores sao: %d",m[i][j]);
		}
	}
}
