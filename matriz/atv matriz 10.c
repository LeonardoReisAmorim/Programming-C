#include <stdio.h>

main()
{
	int i,j,m1[3][3],m2[3][3],mult1[3][3],mult2[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores da matriz 1: %d-%d: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite os valores da matriz 2: %d-%d: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mult1[i][j]=m1[i][j]*2;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mult2[i][j]=m2[i][j]*4;
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\nvalores modificados matriz 1: %d",mult1[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n\nvalores modificados matriz 2: %d",mult2[i][j]);
		}
	}
}
