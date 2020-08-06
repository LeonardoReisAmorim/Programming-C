#include <stdio.h>

main()
{
	int i,j,m[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os numeros: %d-%d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==j){
				printf("os numeros com indices iguais e: %d\n",m[i][j]);
			}
		}
	}
	
	
}
