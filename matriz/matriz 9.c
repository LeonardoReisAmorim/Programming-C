#include <stdio.h>

main()
{
	int i,j,m[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores: ");
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(m[i][j]%2!=0){
				printf("\nindices: %d-%d",i,j);
			}
		}
	}
	
	
}
