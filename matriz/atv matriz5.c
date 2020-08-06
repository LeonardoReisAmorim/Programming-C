#include <stdio.h>

main()
{
	int i,j,m1[3][3],m2[3][3],soma[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite os valores da primeira matriz %d-%d: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\ndigite os valores da segunda matriz %d-%d: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("a matriz somada e: %d\n",soma[i][j]);
		}
	}
}
