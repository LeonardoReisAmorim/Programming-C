#include <stdio.h>

main()
{
	int i,j,m[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: %d-%d: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if((i+j)%2==0){
				printf("\n\ncoordenada: %d-%d;\nvalor: %d",i,j,m[i][j]);
			}
		}
	}
}
